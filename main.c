#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Define the Task structure.
typedef struct {
    int id;
    int arrival_time;
    int service_time;
    int priority;  // Add a priority field
} Task;

// Define the Node structure for the linked list.
typedef struct Node {
    Task task;
    struct Node *next;
} Node;

// Define the Queue structure.
typedef struct {
    Node *front;
    Node *rear;
    int size;
} Queue;

//7 Functions.
void initQueue(Queue *q);
int isEmpty(Queue *q);
void enqueue(Queue *q, Task task);
Task dequeue(Queue *q);
void displayQueue(Queue *q);
double calculateAverageWaitingTime(int totalWaitingTime, int totalTasks);
// Function  queue.
void initQueue(Queue *q) {
    q->front = q->rear = NULL;
    q->size = 0;
};
// Function to check  queue is empty.
int isEmpty(Queue *q) {
    return q->size == 0;
};
// Function to add a task to the queue.
void enqueue(Queue *q, Task task) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->task = task;
    temp->next = NULL;
    if (isEmpty(q)) {
     q->front = q->rear = temp;
    } else if (q->front->task.priority < task.priority) {
     temp->next = q->front;
     q->front = temp;
    } else {
    Node *current = q->front;
    while (current->next != NULL && current->next->task.priority >= task.priority) {
         current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
        if (temp->next == NULL) {
            q->rear = temp;
        }
    }
    q->size++;
};
// Function remove task from the queue.
Task dequeue(Queue *q) {
    if (isEmpty(q)) {
        Task emptyTask = {-1, -1, -1, -1};
        return emptyTask;
    }
    Node *temp = q->front;
    Task task = temp->task;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    q->size--;
    return task;
};
// Function to display the queue.
void displayQueue(Queue *q) {
    Node *current = q->front;
    while (current != NULL) {
        printf("[%d|%d|%d|%d] => ", current->task.id, current->task.arrival_time, current->task.service_time, current->task.priority);
        current = current->next;
    }
    printf("NULL\n");
};
// Function to calculate the average waiting time.
double calculateAverageWaitingTime(int totalWaitingTime, int totalTasks) {
    return totalTasks == 0 ? 0 : (double)totalWaitingTime / totalTasks;   //any thing but not zero
};
#define TICS 10
#define ARRIVAL_RATE 60
#define MAX_SERVICE_TIME 8

int main() {
    srand(time(0)); //  generate random number
    Queue queue;
    initQueue(&queue);
    int taskID = 0;
    int totalWaitingTime = 0;
    int totalTasks = 0;
    int currentTime;
    for (currentTime = 0; currentTime < TICS; currentTime++) {
        printf("============================= %d\n", currentTime);
        int prob = rand() % 100;
        if (prob < ARRIVAL_RATE) {
            int serviceTime = (rand() % MAX_SERVICE_TIME) + 1;
            int priority = rand() % 5;  // Random priority between 0 and 4
            Task newTask = {taskID++, currentTime, serviceTime, priority};
            enqueue(&queue, newTask);
            printf("TASK ARRIVED with id: %d, service time: %d, priority: %d\n", newTask.id, serviceTime, priority);
            totalTasks++;
        } else {
            printf("NO TASK ARRIVED\n");
        }
        if (!isEmpty(&queue)) {
            queue.front->task.service_time--;
            if (queue.front->task.service_time == 0) {
                Task completedTask = dequeue(&queue);
                printf("SERVE TASK: %d\n", completedTask.id);
                totalWaitingTime += (currentTime - completedTask.arrival_time);
            }
        }
        printf("Queue: ");
        displayQueue(&queue);
    }
    while (!isEmpty(&queue)) {
        printf("=======================\n");
        queue.front->task.service_time--;
        if (queue.front->task.service_time == 0) {
            Task completedTask = dequeue(&queue);
            printf("SERVE TASK: %d\n", completedTask.id);
            totalWaitingTime += (currentTime - completedTask.arrival_time);
        }
        printf("Queue: ");
        displayQueue(&queue);
        currentTime++;
    }
    double averageWaitingTime = calculateAverageWaitingTime(totalWaitingTime, totalTasks);
    printf("Average Waiting Time: %.2f\n", averageWaitingTime);
    return 0;
};