#include "TaskManager.h"

int main() {
    TaskManager manager(5);

    manager.addTask("Project");
    manager.addTask("Exam study");
    manager.listTasks();

    return 0;
}

