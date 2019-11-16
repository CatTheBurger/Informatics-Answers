#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int max = 0;
	int power = 1;
	int number = 1;

	cin >> max;

	while(true) {
		if (pow(number, 2) <= max) cout << pow(number, 2) << endl;
		else break;

		number++;
	}

	return 0;
}
