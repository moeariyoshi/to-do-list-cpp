#include <iostream>
#include <vector>
#include <string>

// Display all tasks
void displayTasks(const std::vector<std::string>& tasks) {
    if (tasks.empty()) {
        std::cout << "Your to-do list is empty!" << std::endl;
        return;
    }

    std::cout << "\nTo-Do List:" << std::endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << std::endl;
    }
}

// Add task
void addTask(std::vector<std::string>& tasks) {
    std::string task;
    std::cout << "Enter a new task: ";
    std::cin.ignore(); // To ignore any leftover newlines in the buffer
    std::getline(std::cin, task);
    tasks.push_back(task);
    std::cout << "Task added successfully!" << std::endl;
}

// Remove Task
void removeTask(std::vector<std::string>& tasks) {
    int taskNumber;
    displayTasks(tasks);
    std::cout << "Enter the number of the task to remove: ";
    std::cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size()) {
        std::cout << "Invalid task number!" << std::endl;
    } else {
        tasks.erase(tasks.begin() + taskNumber - 1);
        std::cout << "Task removed successfully!" << std::endl;
    }
}

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
