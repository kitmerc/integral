#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double sintegral,h,a,b,n,m;
    cout << "input start\r\n";
    cin >> a;
    cout << "input end\r\n";
    cin >> b;
    cout << "input step\r\n";
    cin >> h;

    n = (b - a) / h;

    sintegral = h * ((cos(a/2) + cos(b/2)) / 2);
    for( int i = 1; i <= n-1; i++)
    {
        sintegral = sintegral + h * cos((a + h * i)/2);
        cout << sintegral << "\r\n";
    }
    cout << "integral = " << sintegral <<"\n";
}
