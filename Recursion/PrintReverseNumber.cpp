#include <iostream>
using namespace std;
int reverse(int n)
{
    if (n < 0)
    {
        return 1;
    }

    cout << n;
    reverse(n - 1);
}
int main()
{
    int n;
    cin >> n;
    reverse(n);
}