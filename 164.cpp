#include <iostream>
using namespace std;

int count = 0;
int size = 0;

void dfs(int *arr, int *gr, int node) {

	if(arr[node] == 1) return;

	arr[node] = 1;
	//cout << "Passed " << node << endl;

	count++;

	for(int j = 0; j < size; j++) {
		if ((gr[node*size + j]) && (j != node)) {
			dfs(arr, gr, j);
			//return;
		}
	}
}

void doDfs(int *arr, int size) {

}

int main(){
	int start;

	cin >> size;
	cin >> start;

	//cout << size << endl;

	if (start == 0) {
		cout << count << endl;
		return 0;
	}

	start --;
	
	int used[size];
	int graph[size*size];

	for(int i = 0;i < size;i++) {
		for(int j = 0;j < size;j++) {
			cin >> graph[i*size +j];
		}
		used[i] = 0;
	}

	dfs(used, graph, start);

	cout << count << endl;
	return 0;
}
