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

[![View Code](https://img.shields.io/badge/View%20Code-task_queue.c-blue?style=for-the-badge)](https://github.com/ZiyadAzzaz/Task-Queue-Simulator/blob/main/Final_Queue.c)

The task queue uses a **priority queue** to ensure higher priority tasks are processed first.

---

## 📝 Features

- 🗂️ **Simulate Task Arrivals**: Randomly generated tasks with varying priorities and service times  
- 🕹️ **Queue Management**: Prioritize and manage tasks dynamically  
- 🔄 **Average Waiting Time**: Calculate and display the average waiting time of tasks  
- 📝 **File Export**: Save task queue states to CSV or JSON files  
- 🔍 **Task Processing**: Tasks are processed based on priority and service time  

---

## 🛠️ Tech Stack

- **Language**: C  
- **Compiler**: GCC or any C99-compliant compiler  
- **Interface**: Terminal / Command Prompt  

---

## 🧩 Data Model

Each task includes:

| Field         | Type     | Description                                     |
|---------------|----------|-------------------------------------------------|
| ID            | Integer  | Unique task identifier                          |
| Arrival Time  | Integer  | Time when the task arrives in the queue         |
| Service Time  | Integer  | Time required to process the task               |
| Priority      | Integer  | Task priority (lower number = higher priority)  |

---

## 🚀 How to Compile and Run

1. **Clone this repository**:

   ```bash
   git clone https://github.com/your-username/Task-Queue-Simulator.git
   cd Task-Queue-Simulator
   ```

2. **Compile the source code**:

   You need a **C compiler** (like GCC) to compile the program. Run the following command in the terminal:

   ```bash
   gcc -o task-queue Final_Queue.c
   ```

3. **Run the program**:

   After the compilation, you can run the program with this command:

   ```bash
   ./task-queue
   ```

👉 [View the complete C source code here](https://github.com/your-username/Task-Queue-Simulator/blob/main/Final_Queue.c)

---

## 🎯 Future Enhancements

- 💾 Save and load task queue states from a file  
- 📈 Sort tasks by priority, arrival time, or service time  
- 🛡️ Input validation improvements  
- 📊 Track task processing statistics  
- 🧠 Implement more task handling features like dynamic task generation  

---

## 💡 Inspiration

This project was created to help students and beginners **learn C programming** through a practical example.  
It demonstrates how to work with **priority queues**, **dynamic memory allocation**, and **task scheduling** in a clear, maintainable way.

---

## 🪪 License

[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

This project is licensed under the terms of the **MIT License**.

You are free to:

- ✅ **Use** this code for personal or commercial purposes  
- ✅ **Modify** and adapt it to your needs  
- ✅ **Distribute** it as you wish  

**Conditions:**

- You **must include** the copyright notice and license text
- This project is provided **"as is"**, without warranty of any kind

See the [LICENSE](LICENSE) file for full license details.

© 2025 Ziyad Azzaz

---

## 👨‍💻 Author

**Ziyad Azzaz**  
🔗 GitHub: [ZiyadAzzaz](https://github.com/ZiyadAzzaz)

---

> ✨ *Empowering learners to master C programming — one project at a time.*
