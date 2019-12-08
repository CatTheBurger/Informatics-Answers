#include <iostream>
using namespace std;

int count = 0;
int size = 0;

void dfs(int *arr, int *gr, int node) {

	//cout << "Count = " << count << endl;

	if(arr[node] == 1) {
		//cout << "NO! at " << node << endl;
		cout << "NO" << endl;
		exit(0);
	}

	arr[node] = 1;
	count++;

	for(int j = 0; j < size; j++) {
		if ((gr[node*size + j])) {
			gr[j*size + node] = 0;
			dfs(arr, gr, j);
		}
	}
}

int main(){
	int start = 0;

	cin >> size;
	
	int used[size];
	int graph[size*size];

	for(int i = 0;i < size;i++) {
		for(int j = 0;j < size;j++) {
			cin >> graph[i*size +j];
		}
		used[i] = 0;
	}

	dfs(used, graph, start);

	//cout << count << endl;

	if(count != size) {
		cout << "NO" << endl;
		return 0;
	}

	cout << "YES" << endl;
	return 0;
}
