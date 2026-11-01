#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const double Rate_per_hour = 25.00;
//function prototype
void getemployeedetails(string &name, double &basic_salary, double &overtimeHours);
double calculateovertimepay(double overtimeHours);
double calculatenetsalary(double basic_salary, double overtimepay);
void displaypayslip(string &name, double &basic_salary, double &overtimeHours, double &overtimepay, double netsalary);
int main()
{
    string name;
    double basic_salary;
    double overtimeHours;
    cout<<endl;
    //get details
    getemployeedetails(name, basic_salary, overtimeHours);
   // get overtimepay
    double overtimepay = calculateovertimepay(overtimeHours);
    //get netsalary
    double netsalary = calculatenetsalary(basic_salary, overtimepay);
    //display payslip
    displaypayslip(name, basic_salary, overtimeHours, overtimepay, netsalary);
    return 0;
}
//ask input
void getemployeedetails(string& name, double& basic_salary, double& overtimeHours)
{
    cout<<"Enter employee name: ";
    getline(cin,name);
    cout<<"Enter basic salary: ";
    cin>>basic_salary;
    cout<<"Enter overtime hours: ";
    cin>>overtimeHours;
}
//overtimepay calculation
double calculateovertimepay(double overtimeHours)
{
    return overtimeHours * Rate_per_hour;
}
//net salary calculation
double calculatenetsalary(double basic_salary, double overtimepay)
{
    return basic_salary + overtimepay;
}
//print payslip
void displaypayslip(string& name, double& basic_salary, double& overtimeHours, double& overtimepay, double netsalary)
{
    cout<<"....................................................................................................."<<endl;
    cout<<"                                                 payslip                                             "<<endl;
    cout<<"....................................................................................................."<<endl;
    cout<<"Employee name: "<<name<<endl;
    cout<<"Basic salary: "<<basic_salary<<endl;
    cout<<"Overtime hours: "<<overtimeHours<<endl;
    cout<<"Overtime pay: "<<overtimepay<<endl;
    cout<<"....................................................................................................."<<endl;
    cout<<"Netsalary: "<<netsalary<<endl;
    cout<<"....................................................................................................."<<endl;
}
