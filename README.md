# 🔐 Time Complexity Dashboard Edition V1.3

A research initiative analyzing the performance, efficiency, and time complexity of algorithms and non algorithmic scripts across different programming languages. This project visualizes how Python, JavaScript, Java and C++ handle computational stress during Several scenarios.

## 🚀 Overview

Understanding the speed and time complexity for research purposes. This project implements algorithms and non algorithmic scripts in couple major stacks to benchmark their raw power:

* **Python**: Interpreted, ease-of-use focus.
* **Node.js (JavaScript)**: V8 engine, JIT compiled.
* **C++**: Compiled, low-level optimization.
* **JAVA**: Compiled on VM, low-level optimization.

The project includes a **Matplotlib Dashboard** that visualizes the exponential growth of time complexity as password length increases ($O(10^n)$).

## 📊 Current Benchmarks
*Data based on 9-digit brute-force stress tests.*


| No. of Digits | Python Time (s) | JavaScript Time (s) | C++ Time (s) | Java Time (s) |
| :---: | :--- | :--- | :--- | :--- |
| **1** | 0.00010 | 0.000013 | 0.0000057 | 0.000023 |
| **2** | 0.00030 | 0.000048 | 0.000013 | 0.0031 |
| **3** | 0.00057 | 0.000063 | 0.000031 | 0.0033 |
| **4** | 0.0030 | 0.00037 | 0.00023 | 0.005 |
| **5** | 0.028 | 0.0056 | 0.0042 | 0.02 |
| **6** | 0.27 | 0.022 | 0.025 | 0.03 |
| **7** | 3.14 | 0.16 | 0.27 | 0.1 |
| **8** | 32.34 | 1.54 | 2.8 | 0.6 |
| **9** | 304.3 | 15.7 | 29.1 | 6.56 |


**Note: The data from Dashboard.py indicates that while C++ is faster for smaller inputs (1-5 digits), the JavaScript
implementation outperformed C++ in this specific benchmark for larger inputs (6-9 digits).**

**Note: Dashboard will be updated with data.**

| Language | Complexity Trend | Performance Tier |
| :--- | :--- | :--- |
| **C++** | Extremely Linear |  **Fastest** (Compiled machine code) |
| **Node.js** | Optimized V8 |  **High Performance** (Surprising efficiency) |
| **Python** | Exponential Lag |  **Slower** (Overhead of interpreter) |
| **Java** | Extremely Fast | **Fast** (Java VM) |


## 🛠️ Tech Stack & Requirements

### Languages
* **Python 3.x** (Required for the Dashboard)
* **C++** (MinGW / G++ Compiler)
* **Node.js** (Runtime environment)
* **Java** (JAVA VM Runtime environment)

### Libraries
* `matplotlib` (Python)
* `numpy` (Python)
* `chrono` (C++)
* `perf_hooks` (Node.js)

## 📂 Project Structure

```bash
├── crack.cpp          # C++ Implementation (High Speed)
├── crack.js           # JavaScript Implementation (V8 Engine)
├── crack.py           # Python Implementation (Baseline)
├── Dashboard.py       # Data Visualization Tool (Matplotlib)
└── crack.exe         # Compiled C++ Executable
└── crack.java         # JAVA Implementation (Fast)
```

## 📈 Roadmap & Future Updates
I am actively expanding this research to include more sophisticated attack vectors and optimizations:
```
[ ] Multi-threading/Parallel Processing: Implementing threading in Python and OpenMP in C++.

[ ] Dictionary Attacks: Comparing hash table lookup speeds across languages.

[ ] GPU Acceleration: CUDA integration for C++.

[ ] Rainbow Tables: Storage vs. Compute analysis.

[ ] Hashing Algorithms: Benchmarking MD5/SHA-256 collision finding.
```
## 🤝 Contributing
This is a research project, and contributions are welcome! If you want to optimize the algorithms or add a new language (Rust/Go?), feel free to fork the repo and submit a PR.
```
Fork the Project

Create your Feature Branch (git checkout -b feature/NewAlgorithm)

Commit your Changes (git commit -m 'Add Golang Benchmark')

Push to the Branch (git push origin feature/NewAlgorithm)
```
**Open a Pull Request**

📜 License
Distributed under the MIT License. See LICENSE for more information.
