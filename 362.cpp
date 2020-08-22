#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int s1, s2;

    cin >> s1;
    cin >> s2;

    int map[s1][s2];

    for(int i = 0;i < s1;i++) {
        for(int j = 0;j < s2;j++) {
            map[i][j] = 0;
        }
    }

    for(int i = 0;i < s1;i++) {
        for(int j = 0;j < s2;j++) {
            if(j > 0 && i > 0) {
                map[i][j] = map[i-1][j] + map[i][j-1];
            } else {
                map[i][j] = 1;
            }
        }
    }

    for(int i = 0;i < s1;i++) {
        for(int j = 0;j < s2;j++) {
           cout << map[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
