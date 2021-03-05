#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>

using namespace std;

class Employee
{
public:
  Employee(long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
  void setIdNum (const long );			// set id number
  long getIdNum () const;				// get id number
  void setLastName (const string &);	// set last name
  string getLastName () const;			// return last name
  void setFirstName (const string &);	// set first name
  string getFirstName () const;			// return first name
  void setMiddleInitial (const string &);	// set middle initial
  string getMiddleInitial () const;		// return set middle initial
  void setDeptCode(const int);			// set department code
  int getDeptCode () const;				// get department code
  void printEmployee ();				// print Employee information
  char c;
  
  
private:
  long  myIdNum;			//Employee id number
  string myLastName;		//Employee last name
  string myFirstName;		//Employee first name
  string myMiddleInitial;	//Employee middle intial
  int myDeptCode;			//Department code
};

class SalariedEmployee: public Employee{
	public:
	  SalariedEmployee(long = 0, long =0);
	  void setSalary (const long, const long);
	  void SalaryCalc();
	  double getSalary()const;
	  void printSalary();

	private:
	  double Overtime;
	  double Halftime;
	  double MonthlySalary;
	  double Calculation;
};

class HourlyEmployee: public Employee{
	 public:
	  HourlyEmployee(double = 1.0,double = 1.0);
	  void setHourly(const double,const double);
	  void HourlyCalc();
	  double getHourly()const;
	  void printHourly();

	 private:
	  double Hours;
	  double HourlyRate;
	  double Calculation;
	  double Overtime;
};

#endif
 
