
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int x,y;
    char z;
    cin >> x >> z >> y;
    if (z == '+' )
    {
        cout << x + y << endl;
    }
    else if (z == '-')
    {
        cout << x - y << endl;
    }
    else if (z == '/')
    {
        cout << x / y << endl;
    }
    else
    {
        cout << x * y << endl;
    }
    return 0;
}
