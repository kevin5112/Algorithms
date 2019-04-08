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

void bubbleSort(int arr[], int length)
{
	int unsortedLength = length;
	for(int i = 0; i < length; ++i)
	{	
		for(int k = 1; k < unsortedLength; ++k)
		{
			if(arr[k-1] > arr[k])
			{
				swap(arr[k-1], arr[k]);
			}
		}
		unsortedLength--;
	}
}

int main()
{
	int arr[] = {6,5,3,1,8,7,2,4};
	int length = sizeof(arr)/sizeof(arr[0]);

	cout << "array before sort: ";
	print(arr, length);

	bubbleSort(arr, length);
	
	cout << "array before sort: ";
	print(arr, length);


	return 0;
}