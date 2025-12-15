#include <iostream>
#include "Task.h"

void completeTask(Task* t) {
    if (t != nullptr) {
        t->markCompleted();
    }
}

int main() {
    Task t1(1, "Finish project");
    Task t2(2, "Study for exam");

    Task* p1 = &t1;
    Task* p2 = &t2;

    std::cout << "Before:\n";
    std::cout << p1->getId() << " " << p1->getDescription() << "\n";
    std::cout << p2->getId() << " " << p2->getDescription() << "\n";

    completeTask(p1);

    std::cout << "\nAfter completing task 1:\n";
    std::cout << p1->getId() << " completed = " << p1->isCompleted() << "\n";

    return 0;
}

