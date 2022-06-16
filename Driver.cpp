/*
Driver for the Command Line Interface
*/
#include <iostream>
#include <vector>
#include <./Database.hpp>

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
                cout << "\n INDEX//ID//NAME//ADDRESS//BIRTH DATE//PHONE NUMBER//POSITION//HOURS WORKED//HOURS WORKED OVERTIME//NORMAL RATE//OVERTIME RATE\n";
                for(int x = 0; x < EMPLOYEE.EmpID.size(); x++){
                    cout<<x << ". // "EMPLOYEE.EmpID[x] << "//" <<EMPLOYEE.EmpName[x] <<"//"<<EMPLOYEE.EmpAddress[x]<< "//" <<EMPLOYEE.EmpBirthDate[x]<<"//"<< EMPLOYEE.EmpPhoneNumber[x]<< "//"<< EMPLOYEE.EmpPosition[x]<<"//"<< EMPLOYEE.EmpHoursWorked[x]<<"//"<< EMPLOYEE.EmpHoursOvertime[x]<<"//"<< EMPLOYEE.EmpRateNormal[x]<<"//"<< EMPLOYEE.EmpRateOvertime[x]<<endl;    
                }           
                break;
                
            case 2:
            
                
                cout << "\nInput ID: ";
                cin >> id;
                    while (id<0){
                        cout << "Value must be a positive integer: ";
                        cin >> id;
                    }
                EMPLOYEE.EmpID.push_back(id);
                
                cout << "Input Name: ";
                cin >> name;
                EMPLOYEE.EmpName.push_back(name);
                
                cout << "Input Address: ";
                cin >> address;
                EMPLOYEE.EmpAddress.push_back(address);
                
                cout << "Input Birth Date: ";
                cin >> BirthDate;
                EMPLOYEE.EmpBirthDate.push_back(BirthDate);
                
                cout << "Input Phone Number: ";
                cin >> PhoneNumber;
                EMPLOYEE.EmpPhoneNumber.push_back(PhoneNumber);
                
                cout << "Input Position: ";
                cin >> position;
                EMPLOYEE.EmpPosition.push_back(position);
                
                cout << "Input Hours Worked: ";
                cin >> HoursWorked;
                while (HoursWorked<0){
                    cout << "Value must be a positive integer: ";
                    cin >> HoursWorked;
                }
                EMPLOYEE.EmpHoursWorked.push_back(HoursWorked);
                
                cout << "Input Hours Worked Overtime: ";
                cin >> HoursOvertime;
                while (HoursOvertime<0){
                    cout << "Value must be a positive integer: ";
                    cin >> HoursOvertime;
                }
                EMPLOYEE.EmpHoursOvertime.push_back(HoursOvertime);
                
                cout << "Input Normal Rate: ";
                cin >> RateNormal;
                while (RateNormal<0){
                    cout << "Value must be a positive integer: ";
                    cin >> RateNormal;
                }
                EMPLOYEE.EmpRateNormal.push_back(RateNormal);
                
                cout << "Input Overtime Rate: ";
                cin >> RateOvertime;
                while (RateOvertime<0){
                    cout << "Value must be a positive integer: ";
                    cin >> RateOvertime;
                }
                EMPLOYEE.EmpRateOvertime.push_back(RateOvertime);
                
                EMPLOYEE.updatedMessage();
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
                        cout << "Enter new ID: ";
                        cin >> id;
                        while (id<0){
                            cout << "Value must be a positive integer: ";
                            cin >> id;
                        }
                        EMPLOYEE.EmpID[i] = id;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                            
                    case 2:
                        cout << "Enter new name: ";
                        cin >> name;
                        EMPLOYEE.EmpName[i] = name;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                        
                    case 3:
                        cout << "Enter new address: ";
                        cin >> address;
                        EMPLOYEE.EmpAddress[i] = address;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                        
                    case 4:
                        cout << "Enter new DOB: ";
                        cin >> BirthDate;
                        EMPLOYEE.EmpBirthDate[i] = BirthDate;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                        
                    case 5:
                        cout << "Enter new phone number: ";
                        cin >> PhoneNumber;
                        EMPLOYEE.EmpPhoneNumber[i] = PhoneNumber;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                        
                    case 6:
                        cout << "Enter new position: ";
                        cin >> position;
                        EMPLOYEE.EmpPosition[i] = position;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                    
                    case 7:
                        cout << "Enter new hours worked: ";
                        cin >> HoursWorked;
                        while (HoursWorked<0){
                            cout << "Value must be a positive integer: ";
                            cin >> HoursWorked;
                        }
                        EMPLOYEE.EmpHoursWorked[i]=HoursWorked;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                        
                    case 8:
                        cout << "Enter new hours worked overtime: ";
                        cin >> HoursOvertime;
                        while (HoursOvertime<0){
                            cout << "Value must be a positive integer: ";
                            cin >> HoursOvertime;
                        }
                        EMPLOYEE.EmpHoursOvertime[i]=HoursOvertime;
                        EMPLOYEE.updatedMessage();
                            
                        break;
                        
                    case 9:
                        cout << "Enter new normal rate: ";
                        cin >> RateNormal;
                        while (RateNormal<0){
                            cout << "Value must be a positive integer: ";
                            cin >> RateNormal;
                        }
                        EMPLOYEE.EmpRateNormal[i]=RateNormal;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                        
                    case 10:
                        cout << "Enter new overtime rate: ";
                        cin >> RateOvertime;
                        while (RateOvertime<0){
                            cout << "Value must be a positive integer: ";
                            cin >> RateOvertime;
                        }
                        EMPLOYEE.EmpRateOvertime[i]=RateOvertime;
                        EMPLOYEE.updatedMessage();
                        
                        break;
                        
                    }
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
                cin >> i;
                while(i<0 || i>EMPLOYEE.EmpID.size()){
                    cout << "Index must be between 0 and the number of employees: ";
                    cin >> i;
                }
                
                while (userInput2 != (1 || 2)){
                    cout << "Are you sure you want to delete Index " << i;
                    cout << "\n1. Yes\n2. No" << endl;
                    cout << "Choice: ";
                    cin >> userInput2;
                }
                switch (userInput2){
                    case 1:
                        EMPLOYEE.EmpID.erase(EMPLOYEE.EmpID.begin()+i);
                        EMPLOYEE.EmpName.erase(EMPLOYEE.EmpName.begin()+i);
                        EMPLOYEE.EmpAddress.erase(EMPLOYEE.EmpAddress.begin()+i);
                        EMPLOYEE.EmpBirthDate.erase(EMPLOYEE.EmpBirthDate.begin()+i);
                        EMPLOYEE.EmpPhoneNumber.erase(EMPLOYEE.EmpPhoneNumber.begin()+i);
                        EMPLOYEE.EmpPosition.erase(EMPLOYEE.EmpPosition.begin()+i);
                    
                        EMPLOYEE.EmpHoursWorked.erase(EMPLOYEE.EmpHoursWorked.begin()+i);
                        EMPLOYEE.EmpHoursOvertime.erase(EMPLOYEE.EmpHoursOvertime.begin()+i);
                
                        EMPLOYEE.EmpRateNormal.erase(EMPLOYEE.EmpRateNormal.begin()+i);
                        EMPLOYEE.EmpRateOvertime.erase(EMPLOYEE.EmpRateOvertime.begin()+i);
                        break;
                    
                    case 2:
                        break;
                }
               
                
                break;
                
                
            case 5:
            //breaks switch case; closes program
                break;
            }
        }


    return 0;

}
