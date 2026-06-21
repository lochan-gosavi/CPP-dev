#include <iostream>
using namespace std;
class Stud_Marks
{
public:
    int marks;
    void setMarks(int m)
    {
        marks = m;
    }
    int getMarks()
    {
        return marks + 5;
    }
};
int main()
{
    Stud_Marks s;
    s.setMarks(90);
    cout << s.getMarks();
}