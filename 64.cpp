#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int size;

    cin >> size;

    int arr[size];

    for(int i = 0;i < size;i++) {
        cin >> arr[i];
    }

    for(int i = 0;i < size;i++) {
        if(arr[i] % 2 == 0) cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
