
//https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-c-set-1-introduction/
#include<iostream>
using namespace std;
class Employee {
public:
    virtual void raiseSalary()
    {
        /* common raise salary code */
    }
 
    virtual void promote() { /* common promote code */ }

    //vptr
};
 
class Manager : public Employee {
    virtual void raiseSalary()
    {
        /* Manager specific raise salary code, may contain
          increment of manager specific incentives*/
    }
 
    virtual void promote()
    {
        /* Manager specific promote */
    }
};

class Developer : public Employee {
    virtual void raiseSalary()
    {
        /* Developer specific raise salary code, may contain
          increment of manager specific incentives*/
    }
 
    virtual void promote()
    {
        /* Developer specific promote */
    }
};
// Similarly, there may be other types of employees
 
// We need a very simple function
// to increment the salary of all employees
// Note that emp[] is an array of pointers
// and actual pointed objects can
// be any type of employees.
// This function should ideally
// be in a class like Organization,
// we have made it global to keep things simple
void globalRaiseSalary(Employee* emp[], int n)
{
    for (int i = 0; i < n; i++)
 
        // Polymorphic Call: Calls raiseSalary()
        // according to the actual object, not
        // according to the type of pointer
        emp[i]->raiseSalary();
}
void globalPromotions(Employee* emp[], int n)
{
    for (int i = 0; i < n; i++)
 
        // Polymorphic Call: Calls raiseSalary()
        // according to the actual object, not
        // according to the type of pointer
        emp[i]->promote();
}
int main(){

    Employee* emp[2];
    emp[0] = new Manager;
    emp[1] = new Developer;

    cout<<sizeof(emp[0])<<endl;

    //raise salary
    globalRaiseSalary(emp,2);

    //promotions
    globalPromotions(emp,2);

}