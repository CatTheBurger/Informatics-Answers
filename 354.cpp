#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int size = 0;

    cin >> size;

    int map[size][size] = {0};

    int h = size-1;

    for(int i = 0;i < size;i++) {
        for(int j = 0;j < size;j++) {
            map[i][j] = 0;
        }
    }

    for(int i = 0;i < size;i++) {
        map[h][i] = 1;
        h--;
    }

    for(int i = 0;i < size;i++) {
        for(int j = 0;j < size;j++) {
            if(map[i][j] == 1) {
                for(int k = i + 1;k < size;k++) {
                    //cout << map[k][j] << endl;
                    map[k][j] = 2;
                }
            }
        }
    }

    for(int i = 0;i < size;i++) {
        for(int j = 0;j < size;j++) {
            cout << map[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
