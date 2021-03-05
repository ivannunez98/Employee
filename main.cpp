#include<iostream>
#include <string>
#include "employee.h"

using namespace std;

int main() 
{
  Employee
  e1 (001, "Peter", "Parker", "B", 62),
  e2 (002, "Anthony", "Stark", "E", 63),
  e3 (003, "Robert", "Banner", "B", 03),
  e4 (004, "Wanda", "Maximoff", "V", 64);

  HourlyEmployee
  h1(50,9.50),
  h2(35,10.50);

  cout << "     HOURLY WORKERS      "<< endl;
  cout << "-------------------------"<< endl;

  e1.printEmployee();
  h1.printHourly();

  e4.printEmployee();
  h2.printHourly();

  SalariedEmployee
  s1(6000, 10),
  s2(6000);

  cout << "    SALARIED WORKERS    " << endl;
  cout << "------------------------" << endl;

  e2.printEmployee();
  s1.printSalary();

  e3.printEmployee();
  s2.printSalary();

  cout << "------------------------------------------------" << endl;
  cout << "All calculation based off of 40 hour work weeks." << endl << endl;

}
