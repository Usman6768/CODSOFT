#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Task {
   string desc;
   bool completed = false;
};

vector<Task> tasks;

void AddTask() {
    string desc;
    cout << "Enter task description: "<<endl;
    getline(cin.ignore(1,'\n'), desc); 
    tasks.push_back({desc});
    cout << "Task added successfully!"<<endl;
}

void ViewTasks() {
   if (tasks.empty()) {
       cout << "Task List is Empty!!!"<<endl;
       return;
   }

   cout << "To Do List:\n";
   for (int i = 0; i<tasks.size() ; i++) {
       cout << i + 1 << ". " << tasks[i].desc;
       cout << (tasks[i].completed ? " (Task Completed)" : " (Task Pending)") << endl;
   }
}

void MarkTaskAsCompleted() {
   int TaskNumber;
   ViewTasks();
   cout << "Enter the task number you want to mark as completed : \n ";
   cin >> TaskNumber;

   
   if (TaskNumber < 1 || TaskNumber > tasks.size()) {
       cout << "Invalid Task number.\n";
       return;
   }

   tasks[TaskNumber - 1].completed = true;
   cout << "Task marked as completed!\n";
}

void RemoveTask() {
   int TaskNumber;
   ViewTasks();
   cout << "Enter the task number you want to remove: ";
   cin >> TaskNumber;

   if (TaskNumber < 1 || TaskNumber > tasks.size()) {
       cout << "Invalid task number.\n";
       return;
   }

   tasks.erase(tasks.begin() + TaskNumber - 1);
   cout << "Task removed successfully!\n";
}

int main() {
   int choice;

   do {
       cout << "\nTo-Do List Manager"<<endl;
       cout << "1. Add Task"<<endl;
       cout << "2. View Tasks"<<endl;
       cout << "3. Mark Task as Completed"<<endl;
       cout << "4. Remove Task"<<endl;
       cout << "5. Exit"<<endl;
       cout << "Enter your choice: ";
       cin >> choice;

       switch (choice) {
           case 1:
               AddTask();
               break;
           case 2:
               ViewTasks();
               break;
           case 3:
               MarkTaskAsCompleted();
               break;
           case 4:
               RemoveTask();
               break;
           case 5:
               cout << "Program Exited!";
               break;
           default:
               cout << "Invalid choice! \n Please try again.\n";
       }
   } while (choice != 5);

   return 0;
}
