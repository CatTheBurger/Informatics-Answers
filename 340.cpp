#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int number = 1, n = 0;

	cin >> n;

	while(true) {
		if ((n % number) == 0) cout << number << endl;
		number++;

		if(n < number) break;
	}

	return 0;
}
