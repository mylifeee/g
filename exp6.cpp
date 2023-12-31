#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
 string name;
 int age;
public:
 void set_name(string n) {
 name = n;
 }
 void set_age(int a) {
 age = a;
 }
};
class Student: public Person {
protected:
 int roll_no;
public:
 void set_roll_no(int r) {
 roll_no = r;
 }
 void display_student() {
 cout << "Name: " << name << endl;
 cout << "Age: " << age << endl;
 cout << "Roll number: " << roll_no << endl;
 }
};
class Employee {
protected:
 int emp_id;
 double salary;
public:
 void set_emp_id(int id) {
 emp_id = id;
 }
 void set_salary(double s) {
 salary = s;
 }
};
class Manager: public Employee, public Person {
protected:
 string department;
public:
 void set_department(string d) {
 department = d;
 }
 void display_manager() {
 cout << "Name: " << name << endl;
 cout << "Age: " << age << endl;
 cout << "Employee ID: " << emp_id << endl;
 cout << "Salary: " << salary << endl;
 cout << "Department: " << department << endl;
 }
};
int main() {
 Student s;
 s.set_name("John");
 s.set_age(20);
 s.set_roll_no(101);
 s.display_student();
 Manager m;
 m.set_name("Jane");
 m.set_age(35);
 m.set_emp_id(1001);
 m.set_salary(50000.0);
 m.set_department("Sales");
 m.display_manager();
 return 0;
}

