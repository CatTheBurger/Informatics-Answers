#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c;

    float x1 , x2;
    float d = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    d = (b * b) - (4 * a *c);

    //cout << "D = " << d << endl;

    if ((d > 0.0) && (a != 0)) {
        x1 = ((-b + sqrt(d)) / (2.0 * a));
        x2 = ((-b - sqrt(d)) / (2.0 * a));

        cout << x1 << endl;
        cout << x2 << endl;
    } 
    if ((d == 0.0) && (a != 0.0)) {
        x1 = (-b) / (2.0 * a);
        cout << x1 << endl;
    }

}
