#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    if(abs(a - b) < c && c < a + b)
        if(abs(c - b) < a && a < c + b)
            if(abs(a - c) < b && b < c + a)
                {
                    cout << "YES" << endl;
                    return 0;
                }
                
    cout << "NO" << endl;
    return 0;                
}
