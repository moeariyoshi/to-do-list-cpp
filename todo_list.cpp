#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> tasks;
    int choice;

    do {
        std::cout << "\nSimple To-Do List App" << std::endl;
        std::cout << "1. View Tasks" << std::endl;
        std::cout << "2. Add Task" << std::endl;
        std::cout << "3. Remove Task" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Choose an option (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                displayTasks(tasks);
                break;
            case 2:
                addTask(tasks);
                break;
            case 3:
                removeTask(tasks);
                break;
            case 4:
                std::cout << "Exiting the app..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please choose again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
