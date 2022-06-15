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
    int userInput2 = 0;
    int i = -1;
    
    while (userInput != 5){
        cout<<"\n==========================EMPLOYEE DATABASE==========================";
        cout<<"\n1. View Database\n2. Insert new employee\n3. Edit employee data\n4. Delete employee data\n5. Close";
        cout<<"\n\nInput an action: ";
        cin >> userInput;
        
        switch (userInput){
            case 1:
                cout << "\n ID//NAME//ADDRESS//BIRTH DATE//PHONE NUMBER//POSITION\n";
                cout << EMPLOYEE.EmpID[0];
                    
                
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
                EMPLOYEE.EmpAddress.push_back(address);
                
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
                if(EMPLOYEE.EmpID.size() == 0){
                    cout << "The database is still empty!";
                    break;
                }
                
                i = -1;
                userInput2 = 0;
                cout << "Enter the employee index of the employee you want to edit: ";
                while(i<0 || i>EMPLOYEE.EmpID.size()){
                    cout << "Index must be between 0 and the number of employees: ";
                    cin >> i;
                }
                break;
                
            case 4:
                if(EMPLOYEE.EmpID.size() == 0){
                    cout << "The database is still empty!";
                    break;
                }
                
                i = -1;
                userInput2 = 0;
                cout << "Enter the employee index of the employee you want deleted: ";
                if (i<0 || i>EMPLOYEE.EmpID.size()){
                    while(i<0 || i>EMPLOYEE.EmpID.size()){
                        cout << "Enter the employee index of the employee you want deleted: ";
                        cin >> i;
                    }    
                }
                
                
                break;
                
                
            case 5:
            //breaks switch case; closes program
                break;
            }
        }


    return 0;

}




