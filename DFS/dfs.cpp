#include <iostream>
#include <iomanip>
#include <stack>
#include <unordered_set>
using namespace std;

void populateArray(int arr[][10], int elem)
{
	int counter = 1;
	for(int i = 0; i < 10; ++i)
	{
		for(int j = 0; j < 10; ++j)
		{
			arr[i][j] = counter++;
		}
	}
}

void printArray(int arr[][10], int elem)
{
	for(int i = 0; i < 10; ++i)
	{
		for(int j = elem; j < 10; ++j)
		{
			cout << setw(6) << arr[i][j] << ' ';
		}
		cout << endl << endl << endl;
	}
}


bool DFSHelper(int arr[][10], int row, int target, stack<int> s, int i, int j, unordered_set<bool> visited) {
	if(visited.find() != visited.end()){
		return false;
	}

	s.push(arr[i][j]);

	if(target == arr[i][j]) {
		return true;
	}

}


bool DFS(int arr[][10], int row, int target)
{
	unordered_set<bool> visited;
	stack<int> s;
	return DFSHelper(arr, row, target, s, 0, 0, visited);
}


int main()
{
	int arr[10][10];
	int target = 91;

	populateArray(arr, 10);
	printArray(arr, 10);
	cout << "Is there a path to " << target << "? " << (DFS(arr, 10, target) ? "yes\n" : "no\n");

	return 0;
}