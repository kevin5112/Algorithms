#include <iostream>
using namespace std;

void swap(int &int1, int &int2)
{
	int temp = int1;
	int1 = int2; 
	int2 = temp;
}

int partition(int arr[], int low, int high)
{
	int pivot = high;
	int i = low;
	int j = high - 1;

	while(true)
	{
		while(arr[i] < arr[pivot])
		{
			++i;
		}
		while(arr[j] > arr[pivot])
		{
			--j;
		}
		if(i > j)
		{
			break;
		}
		else
		{
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i], arr[pivot]);
	return i;
}


// low --> starting index, high --> ending index
void quickSort(int arr[], int low, int high)
{
	if(low > high)
	{
		return;
	}

	// pi is partitioning index, arr[pi] is now
	// at the right place
	int pi = partition(arr, low, high);

	quickSort(arr, low, pi - 1); // before pi
	quickSort(arr, pi + 1, high); // after pi
}


int main()
{
	int array[] = {10,80,30,90,40,50,70};

	cout << "Array before quickSort: ";
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); ++i)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

	quickSort(array, 0, 6);

	cout << "Array after quickSort: ";
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); ++i)
	{
		cout << array[i] << ' ';
	}
	cout << endl;


	return 0;
}

