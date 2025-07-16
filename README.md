# 🚀 Task Queue Simulator

A **C-based simulation** of a priority-driven task queue system, designed to process tasks based on their priorities and service times.  
This project demonstrates task scheduling, queue management, and performance evaluation using a **linked-list-based priority queue** in C.

---

## 📋 Overview

This simulation models a basic task scheduling environment where tasks:

- ✅ Arrive randomly over time  
- ✅ Are enqueued based on priority  
- ✅ Are processed according to priority and service time  
- ✅ Contribute to the calculation of average waiting time  

[![View Code](https://img.shields.io/badge/View%20Code-Final_Queue.c-blue?style=for-the-badge)](https://github.com/ZiyadAzzaz/Task-Queue-Simulator/blob/main/Final_Queue.c)

---

## 📝 Features

- 🗂️ **Simulate Task Arrivals**: Tasks are randomly generated based on a probability model  
- 🕹️ **Priority Queue Management**: Tasks are inserted based on priority (lower number = higher priority)  
- ⏳ **Time Simulation**: Task service and queue state update over simulated ticks  
- 📊 **Average Waiting Time Calculation**: Evaluates system efficiency after all tasks are processed  
- 🖥️ **Terminal Output**: Queue state and events are printed in a readable format  

---

## 🛠️ Tech Stack

- **Language**: C  
- **Compiler**: GCC or any C99-compatible compiler  
- **Execution**: Linux/macOS/Windows terminal  

---

## 🧩 Data Model

Each task is represented by the following structure:

| Field         | Type     | Description                                     |
|---------------|----------|-------------------------------------------------|
| `id`          | `int`    | Unique task identifier                          |
| `arrival_time`| `int`    | Time the task arrives                           |
| `service_time`| `int`    | Time required to complete the task              |
| `priority`    | `int`    | Priority value (0 = highest priority)           |

---

## 🚀 How to Compile and Run

1. **Clone this repository**:

   ```bash
   git clone https://github.com/ZiyadAzzaz/Task-Queue-Simulator.git
   cd Task-Queue-Simulator
   ```

2. **Compile the source code**:

   ```bash
   gcc -Wall -o task-queue Final_Queue.c
   ```

3. **Run the program**:

   ```bash
   ./task-queue
   ```

👉 [View the complete source code](https://github.com/ZiyadAzzaz/Task-Queue-Simulator/blob/main/Final_Queue.c)

---

## 🧪 Sample Output

```
============================= 0
TASK ARRIVED with id: 0, service time: 5, priority: 2
Queue: [0|0|5|2] => NULL
...
SERVE TASK: 0
Average Waiting Time: 4.20
```

---

## 🎯 Future Enhancements (Optional Ideas)

- 💾 Save and load queue states from files (CSV, JSON)  
- 🛠️ Command-line configuration of arrival rate and simulation ticks  
- 🧮 Real-time statistics during simulation  
- 📉 Visualization of task throughput and wait time trends  
- 🧠 Extend with round-robin or multi-level queue algorithms  

---

## 💡 Project Purpose

This project was built as a practical exercise to help students and beginners understand:

- How **priority queues** work in practice  
- Using **linked lists** for queue implementations  
- Concepts of **discrete event simulation**  
- Core **data structure operations** in C  

---

## 🪪 License

[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

This project is licensed under the terms of the **MIT License**.

You are free to:

- ✅ Use this code for any purpose  
- ✅ Modify it for personal or academic projects  
- ✅ Share or publish improvements  

**Note:** Provided **"as is"**, without warranty of any kind.

---

## 👨‍💻 Author

**Ziyad Azzaz**  
🔗 GitHub: [ZiyadAzzaz](https://github.com/ZiyadAzzaz)

---

> ✨ *Built to help learners master core concepts in C programming — one project at a time.*
