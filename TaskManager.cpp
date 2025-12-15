#include "TaskManager.h"
#include <iostream>

TaskManager::TaskManager(int capacity)
    : tasks(std::make_unique<Task[]>(capacity)),
      size(0),
      capacity(capacity) {}

void TaskManager::addTask(const std::string& desc) {
    if (size >= capacity) return;
    tasks[size] = Task(size + 1, desc);
    size++;
}

void TaskManager::listTasks() const {
    for (int i = 0; i < size; i++) {
        std::cout << tasks[i].getId() << ": "
                  << tasks[i].getDescription() << "\n";
    }
}

