#include <iostream>
using namespace std;
class Student
{
public:
    int age;
    float gpa;
    string name;
};
int main()
{
    Student s1;
    s1.name = "Lochan";
    s1.age = 21;
    s1.gpa = 9.2;

    Student s2;
    s2.name = "ABC";
    s2.age = 20;
    s2.gpa = 9.0;

    cout << s1.name << " " << s1.gpa << " " << s1.age << endl;
    cout << s2.name << " " << s2.gpa << " " << s2.age;
}