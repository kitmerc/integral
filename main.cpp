#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double sintegral,h,a,b,n,m;
    cout << "input a\r\n";
    cin >> a;
    cout << "input b\r\n";
    cin >> b;
    cout << "input step\r\n";
    cin >> h;

    n = (b - a) / h;

    sintegral = h * ((cos(a/2) + cos(b/2)) / 2);
    cout << sintegral;
    for( int i = 1; i <= n-1; i++)
    {
        sintegral = sintegral + h * cos((a + h * i)/2);
        cout << sintegral << "\r\n";
    }
    cout << "integral = " << sintegral <<"\n";
    m =  2 * sin(1/2);
    cout << m << "\r\n";
/***
check
***/

    float rez;

    rez = (2 * sin(b/2)) - (2 * sin(a/2));

    cout << "integral check =  " << rez;

    return 0;
}
