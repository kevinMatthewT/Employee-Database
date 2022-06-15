#include "./Database.hpp"
#include <iostream>
#include <vector>

int main()
{
    int userInput = 0;
    cout<<"==========================EMPLOYEE DATABASE==========================";
    cout<<"\n1. View Database\n2. Insert new employee\n3. Edit employee data\n4. Delete employee data\n5. Close";
    std::cin >> userInput;
    
    
    while (userInput != 5){
    cout<<"\n\nInput an action: ";
    
    switch (userInput){
        case 1:
            cout << "";
            break;
            
        case 2:
            cout << "";
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
