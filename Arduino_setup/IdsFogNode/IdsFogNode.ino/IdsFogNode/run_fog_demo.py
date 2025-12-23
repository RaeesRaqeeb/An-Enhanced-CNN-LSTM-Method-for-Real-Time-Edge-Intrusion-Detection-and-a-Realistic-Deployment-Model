import serial
import time
import pandas as pd
import numpy as np

# CONFIGURATION
SERIAL_PORT = 'COM3'  # CHECK YOUR ARDUINO PORT!
BAUD_RATE = 115200

# 1. Load the Test Data
# We use the actual test data to ensure the features match exactly what the model learned
print("Loading Test Data...")
# If you have the dataframes in memory from your notebook, skip this.
# Otherwise, save X_test to csv: X_test.to_csv('X_test.csv', index=False)
# and load it here:
df = pd.read_csv('X_test.csv') 
X_test_np = df.values

# FOR NOW: Let's assume you pass X_test and y_test from your notebook
# Copy this script into a cell in your Jupyter Notebook to make it easier.

def run_demo(X_data, y_data):
    try:
        arduino = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
        time.sleep(2) # Wait for Arduino to reboot
        print(f"Connected to Fog Node on {SERIAL_PORT}")
    except:
        print("Error: Check your Serial Port (COM3/COM4, etc.)")
        return

    print("\n--- STARTING TRAFFIC STREAM TO FOG NODE ---")
    
    # We will send 20 random packets from the test set
    indices = np.random.choice(len(X_data), 20, replace=False)

    for i in indices:
        features = X_data.iloc[i].values
        true_label = y_data.iloc[i] # or y_data[i] if numpy

        # Create comma-separated string
        msg = ",".join([str(x) for x in features]) + "\n"
        
        # Send to Arduino
        arduino.write(bytes(msg, 'utf-8'))
        
        # Receive Response
        response = arduino.readline().decode('utf-8').strip()
        
        if response:
            print(f"Sent Packet [{i}] (True: {true_label}) -> Fog Response: {response}")
        else:
            print("No response from Fog Node.")
            
        time.sleep(0.5) # Small delay to make the demo readable

    arduino.close()

# UNCOMMENT TO RUN IN NOTEBOOK:
run_demo(X_test, y_test)