#include <iostream>
using namespace std;
int reverse(int n)
{
    if (n < 0)
    {
        return 1;
    }
    reverse(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    reverse(n);
}