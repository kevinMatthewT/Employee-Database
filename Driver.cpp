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
                userInput2 = 1;
                cout << "Enter the employee index of the employee you want to edit: ";
                cin >> i;
                if (i<0 || i>EMPLOYEE.EmpID.size()){
                    while(i<0 || i>EMPLOYEE.EmpID.size()){
                        cout << "Index must be between 0 and the number of employees: ";
                        cin >> i;
                    }
                }
                
                while  (userInput2 != 0){
                    cout << "\n Which element would you like to change?";
                    cout << "\n0. Back\n1. ID\n2.Name\n3. Address\n4. DOB\n5. Phone Number\n6. Position\n7.Hours Worked\n8. Overtime Hours\n9. Normal Rate\n10. Overtime Rate";
                    cout << "\nEnter number: ";
                    cin >> userInput2;
                    switch (userInput2){
                        case 0:
                            //cancel edit
                            cout << "---Cancelling edit---";
                            break;
                            
                        case 1:
                        
                            break;
                            
                        case 2:
                        
                            break;
                            
                        case 3:
                        
                            break;
                            
                        case 4:
                        
                            break;
                            
                        case 5:
                        
                            break;
                            
                        case 6:
                        
                            break;
                        
                        case 7:
                        
                            break;
                            
                        case 8:
                        
                            break;
                            
                        case 9:
                        
                            break;
                            
                        case 10:
                        
                            break;
                            
                    }
                };
                break;
                
            case 4:
                if(EMPLOYEE.EmpID.size() == 0){
                    cout << "The database is still empty!";
                    break;
                }
                
                i = -1;
                userInput2 = 0;
                cout << "Enter the employee index of the employee you want deleted: ";
                cin >> i;
                while(i<0 || i>EMPLOYEE.EmpID.size()){
                    cout << "Index must be between 0 and the number of employees: ";
                    cin >> i;
                };
                
                cout << "Are you sure you want to delete Index " << i;
                cout << "\n1. Yes\n2. No" << endl;
                cin >> userInput2;
                while (userInput2 != (1 || 2)){
                    cout << "Are you sure you want to delete Index " << i;
                    cout << "\n1. Yes\n2. No" << endl;
                    cin >> userInput2;
                };
                    
                    
                
                break;
                
                
            case 5:
            //breaks switch case; closes program
                break;
            }
        }


    return 0;

}
