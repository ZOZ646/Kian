#include <iostream>
using namespace std;

int main () {
    long long int x, y, z;
    cin >> x >> y >> z;
    cout << min (z, min (x, y)) << " " << max (z, max (x, y));

    return 0;
}