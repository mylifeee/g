#include <iostream>
#include <string>
using namespace std;
class Person {
public:
 string name;
 int age;
 string occupation;
 Person(string name1, int age1, string occupation1) {
 name = name1;
 age = age1;
 occupation = occupation;
 }
 void display()
 {
 cout << "Name: " << name << endl;
 cout << "Age: " <<age << endl;
 cout << "Occupation: " << occupation << endl;
}
};
int main() {
 Person john("John Doe", 30, "Software Developer");
 Person peter("peter Doe",35,"Manager");
 john.display();
 peter.display();
 return 0;
}
