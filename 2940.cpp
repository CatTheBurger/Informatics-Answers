#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int road_distance = 109;
    int time;
    int speed;
    int result = 0;

    cin >> speed;
    cin >> time;

    time = abs(time);

    result = (road_distance + (speed * time) % 109) % 109;

    cout << result << endl;
    return 0;
}
