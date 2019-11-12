include <iostream>
#include <math.h> 
using namespace std;

int main(){ 
    int year = 0;   
    cin >> year;

    if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
