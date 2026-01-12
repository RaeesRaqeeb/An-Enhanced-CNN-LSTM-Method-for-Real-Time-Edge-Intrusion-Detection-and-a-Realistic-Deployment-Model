# Lightweight Edge-IDS: An Optimized CNN-LSTM Framework for Fog Computing

This repository contains the implementation of an improved, deployment-ready Intrusion Detection System (IDS) designed for resource-constrained Fog nodes. By combining a hybrid **CNN-LSTM** architecture with **TFLite Quantization** and **Parquet-based Data Engineering**, this system achieves state-of-the-art performance on the **CICIoT2023** dataset.

## Key Achievements

* **0% False Positive Rate (FPR):** Verified through a 35,000-instance stress test (30k Normal / 5k Attack).
* **99.75% Binary Accuracy:** Surpassing existing baseline models while remaining lightweight.
* **Hardware-Ready:** Optimized via **Int8 Quantization** for millisecond-level inference on ARM-based devices (Raspberry Pi/Edge Gateways).
* **Big Data Scalability:** Implemented a **Parquet batching pipeline** to handle the 33GB+ CICIoT2023 dataset without memory crashes.

---

## Comparative Analysis: Deep Learning vs. Classical ML

While the core of this research focuses on the hybrid **CNN-LSTM**, we conducted extensive benchmarking against **Classical Machine Learning** models to validate the superiority of our approach for complex IoT traffic patterns.

| Model | Accuracy (%) | FPR (%) | Resource Usage | Automated Feature Extraction |
| --- | --- | --- | --- | --- |
| **Proposed CNN-LSTM (Quantized)** | **99.75%** | **0%** | **Very Low** | **Yes** |
| Random Forest | 96.80% | 0.4200% | Medium | No (Manual) |
| Decision Tree | 93.45% | 1.1200% | Low | No (Manual) |
| XGBoost | 96.20% | 0.3500% | High | No (Manual) |

**Conclusion:** While Classical ML models like Random Forest are effective for tabular data, our CNN-LSTM architecture excels at capturing the **temporal dependencies** (time-series patterns) of network flows, leading to an absolute reduction in false alarms—critical for "quiet" home IoT environments.

---

## Tech Stack & Tools

* **Machine Learning:** RandomForest,DecisionTree,XGBoost
* **Deep Learning:** TensorFlow, Keras, CNN, LSTM.
* **Data Engineering:** PyArrow, Parquet (Fast I/O), Scikit-Learn.
* **Edge Optimization:** TFLite Converter (Post-Training Quantization).
---

---

## Installation & Usage

### 1. Clone the repository

```bash
git clone https://github.com/RaeesRaqeeb/fog-computing-intrusion-detection.git
cd fog-computing-intrusion-detection

```

### 2. Install Dependencies

```bash
pip install -r requirements.txt

```

### 3. Run Inference with TFLite

```python
import tensorflow as tf
# Load the lightweight model
interpreter = tf.lite.Interpreter(model_path="models/ids_quantized.tflite")
interpreter.allocate_tensors()
# Add your feature extraction logic here

```

---

## Research Paper

This project is part of a research paper titled:

> **"An Improved CNN–LSTM Method for Real-Time Edge Intrusion Detection and a Realistic Deployment Architecture"**

**Authors:** Raqeeb, Nashwa Raheem, Fatima Khan.
**Institution:** FAST NUCES, Peshawar, Pakistan.

*Note: The full paper is currently under review. For access to the draft PDF for academic or internship evaluation. Please refer to the `docs/` folder or contact the author.*

---

## About the Authors

**Raqeeb**

* **Technical Lead** @ AWS Cloud Club, FAST Peshawar.
* **AI Researcher** focusing on IoT Security and Edge Optimization.
* [LinkedIn](https://www.linkedin.com/in/raqeebraees/) | [Email](mailto:raqeebraees23@gmail.com) | [Kaggle](https://www.kaggle.com/raqeeb24)

**Nashwa Raheem**

**Fatima Khan**

* **Co-Lead** GDG Fast Peshawar
* [LinkedIn](https://www.linkedin.com/in/fatima-khan11/)
---

### Future Work

Integrating this framework with the newly released **DataSense 2025** IIoT dataset to test cross-domain robustness in industrial sensor environments.

---
