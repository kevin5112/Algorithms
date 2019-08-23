#include <iostream>
#include <vector>
using namespace std;

long botfib(long n)
{
	if(n == 1 || n == 2) 
		return 1;
	vector<long> v(n + 1, -1);
	v[1] = 1;
	v[2] = 1;

	for(int i = 3; i <= n; ++i)
	{
		v[i] = v[i-1] + v[i-2];
	}
	return v[n];
}

long fib(long n, vector<long> &v){
	long result;
	if(v[n] != -1)
	{
		return v[n];
	}
	if(n == 1 || n == 2)
		result = 1;
	else
		result = fib(n - 1, v) + fib(n - 2, v);
	v[n] = result;
	return result;
}

int main()
{
	long f;
	cout << "What number fib do you want?\n";
	cin >> f;

	vector<long> v(f + 1, -1);
	long a =  botfib(f);	
	cout << "answer: " << a << endl;
	return 0;
}