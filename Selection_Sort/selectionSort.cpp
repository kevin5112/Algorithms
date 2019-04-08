#include <iostream>
using namespace std;

void swap(int &int1, int &int2)
{
	int temp = int1;
	int1 = int2;
	int2 = temp;
}

void print(int arr[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void selectionSort(int arr[], int length)
{
	for(int i = 0; i < length; ++i)
	{
		int minIndex = i;

		for(int j = i+1; j < length; ++j)
		{
			if(arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		swap(arr[minIndex], arr[i]);
	}
}

int main()
{
	int arr[] = {6,5,3,1,8,7,2,4};
	int length = sizeof(arr)/sizeof(arr[0]);

	cout << "array before sort: ";
	print(arr, length);

	selectionSort(arr, length);
	
	cout << "array before sort: ";
	print(arr, length);

	return 0;
}


