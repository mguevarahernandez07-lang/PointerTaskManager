#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <memory>
#include <string>
#include "Task.h"

class TaskManager {
private:
    std::unique_ptr<Task[]> tasks;
    int size;
    int capacity;

public:
    TaskManager(int capacity);
    void addTask(const std::string& desc);
    void listTasks() const;
};

#endif

