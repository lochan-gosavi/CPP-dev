#include <iostream>
using namespace std;
int change(int &x) //& operator importance.
{
    x = x + 10;
    return x;
}
int main()
{
    int x;
    cin >> x;
    change(x);
    cout << x;
}