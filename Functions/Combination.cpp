#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
// int rcom(int r)
// {
//     int fact = 1;
//     for (int i = 1; i <= r; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
int main()
{
    int n, r;
    cin >> n >> r;
    cout << factorial(n) / ((factorial(n - r)) * factorial(r));
}