#include <iostream>
using namespace std;
class Student
{
public:
    int age;
    float gpa;
    string name;

    Student(int a, float g, string n)
    {
        age = a;
        gpa = g;
        name = n;
    }
};
int main()
{
    Student s1(21, 9.2, "Lochan");
    Student s2(20, 8.5, "ABC");

    cout << "Student 1 : " << s1.name << " " << s1.gpa << " " << s1.age << endl;
    cout << "Student 2 : " << s2.name << " " << s2.gpa << " " << s2.age;
}