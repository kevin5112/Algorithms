#include <iostream>
#include <vector>
#include <string>
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

void bubbleSort(vector<int> &v)
{
	bool sorted = false;
	bool swapper = true;
	while(!sorted)
	{
		for(int i = 1; i < v.size(); ++i)
		{
			if(v[i] < v[i-1])
			{
				std::swap(v[i], v[i-1]);
				swapper = false;
			}
		}
		if(swapper)
		{
			sorted = true;
		}
		else
		{
			swapper = true;
		}
	}
	
}

int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(8);

	printArray("Before sort: ", v);
	bubbleSort(v);
	printArray("After sort: ", v);


	return 0;
}