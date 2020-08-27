#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printArray(string t, const vector<int> &v)
{
	cout << t;
	for(int i : v)
	{
		cout << i << ' ';
	}
	cout << endl;
}

void selectionSort(vector<int> &v)
{
	int minIndex = 0;
	int sortedSpace = 0;

	while(sortedSpace < v.size())
	{
		for(int i = sortedSpace; i < v.size(); ++i)
		{
			if(v[i] < v[minIndex])
			{
				minIndex = i;
			}
		}

		std::swap(v[sortedSpace++], v[minIndex]);
		minIndex = sortedSpace;
	}
}

int main()
{
	vector<int> v;
	v.push_back(64);
	v.push_back(25);
	v.push_back(12);
	v.push_back(22);
	v.push_back(11);

	printArray("Before sort: ", v);
	selectionSort(v);
	printArray("After sort: ", v);



	return 0;
}