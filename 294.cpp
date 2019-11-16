#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    int max = 0;
    int arr[3] = { a, b, c };

    for (int i = 0;i < 3;i++){
        if(abs(max) < abs(arr[i])) {
            //cout << abs(max) << " < " << "abs(" << arr[i] << ") = " << (abs(max) < abs(arr[i])) << endl;
            max = arr[i];
        }
    }

    for (int i = 0;i < 3;i++){
        if(arr[i] >= 0){
            if(max < arr[i]) max = arr[i];
        } else {
            if(max < arr[i]) max = arr[i];
        }
    }

    cout << max << endl;

    return 0;
}
