#include <iostream>
using namespace std;
int main()
{
    pair<int, int> p = {1, 5};
    cout << p.first << " " << p.second << endl;

    pair<string, int> n = {"Lochan", 5};
    cout << n.first << " " << n.second << endl;

    // Pair of pair
    pair<int, pair<char, int>> d = {1, {'l', 5}};
    cout << d.first << " " << d.second.first << " " << d.second.second << endl;
}