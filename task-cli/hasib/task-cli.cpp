#include <bits/stdc++.h>
#include <ctime>

using namespace std;


class Task{
    int id;
    string description, status, createdAt, updatedAt;

public:
    Task(int id, string description, string status, string createdAt, string updatedAt){
        this->id = id;
        this->description = description;
        this->status = status;
        this->createdAt = createdAt;
        this->updatedAt = updatedAt;
    }

    // Getters
    int getId(){ return id; }
    string getDescription(){ return description; }
    string getStatus(){ return status; }
    string getCreatedAt(){ return createdAt; }
    string getUpdatedAt(){ return updatedAt; }

};


vector<Task> taskList;



// Task Adding Function
void addTask(string description){
    int id = taskList.size() + 1;
    string status = "todo";
    
    time_t current_time = time(0);    
    string createdAt = ctime(&current_time);
    string updatedAt = ctime(&current_time);

    Task newTask(id, description, status, createdAt, updatedAt);
    taskList.push_back(newTask);

    cout << "Task added successfully (ID: " << id << ")" << endl;
}





int main(int argc, char* args[]) {


    // Add new task
    if(string(args[1]) == "add"){
        addTask(args[2]);
    }


    return 0;
}
