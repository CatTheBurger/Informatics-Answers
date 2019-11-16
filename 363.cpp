#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int s1, s2;

    cin >> s1;
    cin >> s2;

    int map[s1][s2];
    int counter = 0;
    int right = 1;

    for(int i = 0;i < s1;i++) {
        for(int j = 0;j < s2;j++) {
            if(right) {
                map[i][j] = counter;
            } else {
                map[i][s2 - j - 1] = counter;
            }

            counter++;
        }

        if(right == 1) right = 0;
        else right = 1;
    }

    for(int i = 0;i < s1;i++) {
        for (int j = 0; j < s2; j++) {
           cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
