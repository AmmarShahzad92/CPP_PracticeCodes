#include <iostream>
#include <string>
using namespace std;

// Define the struct for employee
struct Employee {
    string firstName;
    string lastName;
    int age;
    float salary;

};

// Function to calculate and print the average salary of all employees
void avg_salary_calc(Employee employees[], int count) {
    float totalSalary = 0;
    for (int i = 0; i < count; ++i) {
        totalSalary += employees[i].salary;
    }
    float averageSalary = totalSalary / count;
    cout << "Average salary of all employees: " << averageSalary << endl;
}

int main() {
    // Declare an array of employees and other necessary variables
    const int maxEmployees = 5;
    Employee employees[maxEmployees];
    int employeeCount = 0;
    int choice;

    do {
        // Display the menu
        cout << "Menu:\n";
        cout << "0. Quit\n";
        cout << "1. Enter a record of an employee\n";
        cout << "2. Display first and last name of employees having age 40 and above\n";
        cout << "3. Display average salary\n";
        cout << "Enter your choice: ";
        cin >> choice;
        // Perform the corresponding action based on the choice
        switch (choice) {
            case 0:
                cout << "Exiting the program." << endl;
                break;
            case 1:
                // Check if the maximum number of employees has been reached
                if (employeeCount < maxEmployees) {
                    cout << "Enter first name: ";
                    cin >> employees[employeeCount].firstName;
                    cout << "Enter last name: ";
                    cin >> employees[employeeCount].lastName;
                    cout << "Enter age: ";
                    cin >> employees[employeeCount].age;
                    cout << "Enter salary: ";
                    cin >> employees[employeeCount].salary;
                    employeeCount++;
                } else {
                    cout << "Maximum number of employees reached." << endl;
                }
                break;
            case 2:
                // Display the first and last name of employees aged 40 and above
                cout << "Employees aged 40 and above:\n";
                for (int i = 0; i < employeeCount; ++i) {
                    if (employees[i].age >= 40) {
                        cout << employees[i].firstName << " " << employees[i].lastName << endl;
                    }
                }
                break;
            case 3:
                // Calculate and display the average salary of all employees
                avg_salary_calc(employees, employeeCount);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
