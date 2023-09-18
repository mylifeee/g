#include <iostream>
#include <string>
using namespace std;
class STUDENT {
private:
 int usn;
 char name[20];
 int marks[2];
public:
 void read() {
 cout << "Enter USN: ";
 cin >> usn;
 cout << "Enter Name: ";
 cin >> name;
 cout << "Enter Marks in 3 tests: ";
 cin >> marks[0] >> marks[1] >> marks[2];
 }
 double avg() {
 int f= max(max(marks[0],marks[1]),marks[2]);
int l= min(min(marks[0],marks[1]),marks[2]);
int sec=(marks[0]+marks[1]+marks[2])-f-l; 
return(f+sec)/2.0;
 }
 void display() {
 cout << "USN: " << usn << ", Name: " << name << ", Average Marks: " << avg() << endl;
 }
};
int main() {
 STUDENT students[3];
 for (int i = 0; i < 3; i++) {
 cout << "Enter details of student " << i + 1 << endl;
 students[i].read();
 }
 cout << endl << "Details of all students: " << endl;
 for (int i = 0; i < 3; i++) {
 students[i].display();
 }
 return 0;
}

