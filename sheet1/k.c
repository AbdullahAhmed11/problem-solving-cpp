
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    cout << min(x, min(y, z));
    cout << " ";
    cout << max(x, max(y, z));

    return 0;
}
