#include "./Database.hpp"
#include <iostream>
#include <vector>


int main()
{
    int id;
    string name;
    string address;
    string BirthDate;
    string PhoneNumber;
    string position;

    int HoursWorked;
    int HoursOvertime;

    int RateNormal;
    int RateOvertime;
    int salary;
    
    Database EMPLOYEE;
    int userInput = 0;
    cout<<"==========================EMPLOYEE DATABASE==========================";
    cout<<"\n1. View Database\n2. Insert new employee\n3. Edit employee data\n4. Delete employee data\n5. Close";
    
    while (userInput != 5){
        cout<<"==========================EMPLOYEE DATABASE==========================";
        cout<<"\n1. View Database\n2. Insert new employee\n3. Edit employee data\n4. Delete employee data\n5. Close";
        cout<<"\n\nInput an action: ";
        std::cin >> userInput;
        
    switch (userInput){
        case 1:
            cout << "\n ID//NAME//ADDRESS//BIRTH DATE//PHONE NUMBER//POSITION";
            
            
            break;
            
        case 2:
            cout << "\nInput ID: ";
            cin >> id;
            EMPLOYEE.EmpID.push_back(id);
            
            cout << "Input name: ";
            cin >> name;
            EMPLOYEE.EmpName.push_back(name);
            cout << "Input address: ";
            cin >> address;
            EMPLOYEE.EmpName.push_back(address);
            cout << "Input Birth Date: ";
            cin >> BirthDate;
            EMPLOYEE.EmpBirthDate.push_back(BirthDate);
            cout << "Input Phone Number: ";
            cin >> PhoneNumber;
            EMPLOYEE.EmpPhoneNumber.push_back(PhoneNumber);
            cout << "Input Hours Worked: ";
            cin >> HoursWorked;
            EMPLOYEE.EmpHoursWorked.push_back(HoursWorked);
            cout << "Input Hours Worked Overtime: ";
            cin >> HoursOvertime;
            EMPLOYEE.EmpHoursOvertime.push_back(HoursOvertime);
            cout << "Input Normal Rate: ";
            cin >> RateNormal;
            EMPLOYEE.EmpRateNormal.push_back(RateNormal);
            cout << "Input Overtime Rate: ";
            cin >> RateOvertime;
            EMPLOYEE.EmpRateOvertime.push_back(RateOvertime);
            
            
            cout << "==========================Database successfully updated!==========================";
            break;
            
        case 3:
            cout << "";
            break;
            
        case 4:
            
            break;
            
            
        case 5:
        //breaks switch case; closes program
            break;
        }
    }
















    return 0;
}
