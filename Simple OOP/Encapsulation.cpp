//
// Created by Eux on 17/02/2024.
//

#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    float salary;
    int id;
public:

    Employee(string name, float salary, int id) {
        // This-> is a pointer to the object that is being created.
        // An analogy for this is that it Accesses the Class Object (Employee) and its private variables, and it assigns the value from the parameter
        this->name = name;
        this->salary = salary;
        this->id = id;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "ID: " << id << endl;
    }

};

void manageStaff() {
    Employee *staff[5] = {new Employee("Eux", 1000, 1), new Employee("Eux", 1000, 2), new Employee("Eux", 1000, 3), new Employee("Eux", 1000, 4), new Employee("Eux", 1000, 5)};
    for (int i = 0; i < 5; i++) {
        staff[i]->display();
        delete staff[i];
    }
}
int main () {
    manageStaff();
    return 0;
}