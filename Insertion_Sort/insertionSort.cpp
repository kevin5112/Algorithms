#include <iostream>
using namespace std;

void swap(int &int1, int &int2)
{
	int temp = int1;
	int1 = int2;
	int2 = temp;
}

int main()
{
	int arr[] = {6,5,3,1,8,7,2,4};
	int i = 1;

	cout << "array before sort: ";
	for(int k = 0; k < 8; ++k)
	{
		cout << arr[k] << ' ';
	}
	cout << endl;

	while(i < sizeof(arr)/sizeof(arr[0]))
	{
		int j = i;
		while(j > 0 && arr[j-1] > arr[j])
		{
			swap(arr[j], arr[j-1]);
			--j;
		}
		++i;
	}

	cout << "array after sort: ";
	for(int k = 0; k < 8; ++k)
	{
		cout << arr[k] << ' ';
	}
	cout << endl;


	return 0;
}