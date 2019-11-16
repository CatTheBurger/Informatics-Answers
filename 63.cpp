include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int len = 0;

    cin >> len;

    int numbers[len];

    if(len < 1 || len > 1000) return 1;

    for(int i = 0;i < len;i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < len; i++) {
        if(i == 0 || i % 2 == 0) cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
