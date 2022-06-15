#include <iostream>
#include <vector>

using namespace std;


class Database{
    //all variables
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

    //making vectors
    public:
    vector<int> EmpID;

    vector<string> EmpName;
    vector<string> EmpAddress;
    vector<string> EmpBirthDate;
    vector<string> EmpPhoneNumber;
    vector<string> EmpPosition;

    vector<int> EmpHoursWorked;
    vector<int> EmpHoursOvertime;

    vector<int> EmpRateNormal;
    vector<int> EmpRateOvertime;
    vector<int> EmpSalary;

    //all setters
    void set_id(int x){
        id=x;
    }

    void set_name(string x){
        name=x;
    }

    void set_address(string x){
        address=x;
    }

    void set_BDate(string x){
        BirthDate=x;
    }

    void set_number(string x){
        PhoneNumber=x;
    }

    void set_position(string x){
        position=x;
    }

    void set_Hours(int x){
        HoursWorked=x;
    }

    void set_overtime(int x){
        HoursOvertime=x;
    }

    void set_rate(int x){
        RateNormal=x;
    }

    void set_rateOver(int x){
        RateOvertime=x;
    }

    void set_salary(int x){
        salary=x;
    }


    //all the getters made will be used to input the info there (exclude hours and salary)
    //note: we can force them to make an if statement calling all setters
    void employee_info_store(int id, string name, string address, string BirthDate, string PhoneNumber, string position){
        EmpID.push_back(id);
        EmpName.push_back(name);
        EmpAddress.push_back(address);
        EmpBirthDate.push_back(BirthDate);
        EmpPhoneNumber.push_back(PhoneNumber);
        EmpPosition.push_back(position);
        EmpSalary.push_back(0);
    }
    
    //check their total hours worked
    void Total_hours(int HRS, int HRSO){
        EmpHoursWorked.push_back(HRS);
        EmpHoursOvertime.push_back(HRSO);
    }

    //calculate their salary, maybe an if statement if we have time
    void Calculate_Salary(int x){
        x-=1;
        int NormalHr=EmpHoursWorked[x];
        int OvertimeHr=EmpHoursOvertime[x];
        int total= NormalHr*RateNormal+OvertimeHr*NormalHr;
        EmpSalary[x]=total;

    }


    void toString(int x){
        cout<<EmpID[x] << " " <<EmpName[x] <<" "<<EmpAddress[x]<< " " <<EmpBirthDate[x]<<" "<< EmpPhoneNumber[x]<< " "<< EmpPosition[x]<<" "<< EmpHoursWorked[x]<<"Hours  $"<<EmpSalary[x]  <<endl;
    }

    //a way to remove employees by their index (not sorting proof)
    void remove_employee(int x){
        x-=1;
        EmpName.erase(EmpName.begin()-1+x);
        EmpAddress.erase(EmpAddress.begin()-1+x);
        EmpBirthDate.erase(EmpBirthDate.begin()-1+x);
        EmpPhoneNumber.erase(EmpPosition.begin()-1+x);
        EmpPosition.erase(EmpPosition.begin()-1+x);

        EmpHoursWorked.erase(EmpHoursWorked.begin()-1+x);
        EmpHoursOvertime.erase(EmpHoursOvertime.begin()-1+x);

        EmpRateNormal.erase(EmpRateNormal.begin()-1+x);
        EmpRateOvertime.erase(EmpRateOvertime.begin()-1+x);
        EmpSalary.erase(EmpSalary.begin()-1+x);
    }

};

