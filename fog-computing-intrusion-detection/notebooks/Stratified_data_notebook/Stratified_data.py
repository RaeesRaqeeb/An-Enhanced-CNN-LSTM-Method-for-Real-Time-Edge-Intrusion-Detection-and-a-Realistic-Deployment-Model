import pandas as pd 
import glob 
import os

output_file = "Stratified_data.csv"


sample_fraction=0.2

all_files = glob.glob(os.path.join("E:/Semester 5/Research Project ML/fog-computing-intrusion-detection/fog-computing-intrusion-detection/data/raw/Merged_csv","*csv"))
all_samples_list=[]
for i,filename in enumerate(all_files):
    print(f"Processing file {i+1}/{len(all_files)}: {filename}")
    try:
        df=pd.read_csv(filename)
        sample_df=df.groupby('Label').sample(frac=sample_fraction,random_state=0)
        all_samples_list.append(sample_df)
    except pd.errors.EmptyDataError:
        print(f"Warning : Empty {filename} file")
    except Exception as e:
        print(f"Error processing {filename} : {e}")
if not all_samples_list:
    print("No data processd")
else:
    print("Concatenating all samples")
    final_sample_df=pd.concat(all_samples_list,ignore_index=True)
    print(f"Saving final sample to {output_file}")
    final_sample_df.to_csv(output_file,index=False)
    print("Process completed")
    print(f"Total Rows in new sample :{len(final_sample_df)}")
    print("class diftribution in new sample:")
    print(final_sample_df['Label'].value_counts(normalize=True))
    