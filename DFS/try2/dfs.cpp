#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main()
{
	vector<vector<int>> v;
	cout << "hello, world\n";
	for(int i = 0; i < 10; ++i)
	{
		vector<int> n;
		for(int j = i; j < i+10; ++j)
		{
			n.push_back(j);
		}
	}

	for(int i = 0; i < v.size(); ++i)
	{
		for(int j = 0; j < v[i].size(); ++j)
		{
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}

