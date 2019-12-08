#include <iostream>
using namespace std;

int main(){
	int size;

	cin >> size;

	int numbers[size];
	for(int i = 0;i < size;i++) {
		cin >> numbers[i];
	}

	int temp = numbers[size-1];

	for(int i = size;i > 0;i--) {
		numbers[i] = numbers[i-1];
	}

	numbers[0] = temp;

	for(int i = 0;i < size;i++) {
		cout << numbers[i] << endl;
	}
	return 0;
}
