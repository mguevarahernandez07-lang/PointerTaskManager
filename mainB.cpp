#include <iostream>
#include <string>
#include "Task.h"

void listTasks(Task* tasks, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << tasks[i].getId() << ": "
                  << tasks[i].getDescription() << "\n";
    }
}

void addTask(Task* tasks, int& size, int capacity, const std::string& desc) {
    if (size >= capacity) {
        std::cout << "Array full\n";
        return;
    }
    tasks[size] = Task(size + 1, desc);
    size++;
}

int main() {
    int capacity = 5;
    int size = 0;

    Task* tasks = new Task[capacity];

    addTask(tasks, size, capacity, "Homework");
    addTask(tasks, size, capacity, "Study");

    listTasks(tasks, size);

    delete[] tasks;
    return 0;
}

