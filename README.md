# 🚀 Task Queue Simulator

A **C-based simulation** of a priority-driven task queue system, designed to process tasks based on their priorities and service times.  
This project demonstrates task scheduling, queue management, and performance evaluation using **priority queues** in C.

---

## 📋 Overview

This application simulates a task queue system with the following features:

- ✅ **Task arrival simulation** with random arrival times
- ✅ **Priority-based task processing**
- ✅ **Average waiting time calculation**
- ✅ Ability to **export queue states** to CSV or JSON files

**[![View Source](https://img.shields.io/badge/View%20Code-task_queue.c-blue?style=for-the-badge)](https://github.com/ZiyadAzzaz/Task-Queue-Simulator/blob/main/task_queue.c)**

The task queue uses a **priority queue** to ensure higher priority tasks are processed first.  

---

## 📝 Features

- 🗂️ **Simulate Task Arrivals**: Randomly generated tasks with varying priorities and service times.
- 🕹️ **Queue Management**: Prioritize and manage tasks dynamically.
- 🔄 **Average Waiting Time**: Calculate and display the average waiting time of tasks.
- 📝 **File Export**: Save task queue states to CSV or JSON files.
- 🔍 **Task Processing**: Tasks are processed based on priority and service time.

---

## 🛠️ Tech Stack

- **Language**: C
- **Compiler**: GCC or any C99-compliant compiler
- **Interface**: Terminal / Command Prompt

---

## 🧩 Data Model

Each task includes:

| Field          | Type     | Description                                  |
|----------------|----------|----------------------------------------------|
| ID             | Integer  | Unique task identifier                       |
| Arrival Time   | Integer  | Time when the task arrives in the queue      |
| Service Time   | Integer  | Time required to process the task           |
| Priority       | Integer  | Task priority (lower number = higher priority) |

---

## 🚀 How to Compile and Run

1. **Clone this repository**:

   ```bash
   git clone https://github.com/your-username/Task-Queue-Simulator.git
   cd Task-Queue-Simulator

2. **Compile the source code:**

You need a C compiler (like GCC) to compile the program. Run the following command in the terminal:
