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

void copyArray(int arr1[], int iBegin, int iEnd, int arr2[])
{
	for(int i = iBegin; i < iEnd; ++i)
	{
		arr2[i] = arr1[i];
	}
}


// Left source half is A[iBegin : iMiddle - 1]
// Right source half is A[iMiddle : iEnd - 1]
// Result is 			B[iBegin : iEnd - 1]
void topDownMerge(int A[], int iBegin, int iMiddle, int iEnd, int B[])
{
	int i = iBegin, j = iMiddle;

	// while there are elems in the left or right runs...
	for(int k = iBegin; k < iEnd; ++k)
	{
		// if left run head exists and is <= existing right run head
		if(i < iMiddle && (j >= iEnd || A[i] <= A[j]))
		{
			B[k] = A[i];
			++i;
		}
		else 
		{
			B[k] = A[j];
			++j;
		}
	}


}


void topDownSplitMerge(int arr2[], int iBegin, int iEnd, int arr1[])
{
	if(iEnd - iBegin < 2)
	{
		return;		// return if run size == 1
	}
	int iMiddle = (iEnd + iBegin) / 2; // continue to split into halves

	// recursively sort both runs from array 1[] into array 2[]
	topDownSplitMerge(arr1, iBegin, iMiddle, arr2);
	topDownSplitMerge(arr1, iMiddle, iEnd, arr2);
	
	// merge the resulting runs from array 2 into array 1
	topDownMerge(arr2, iBegin, iMiddle, iEnd, arr1);
}


void topDownMergeSort(int arr1[], int length)
{
	int arr2[length];
	copyArray(arr1, 0, length, arr2);
	topDownSplitMerge(arr2, 0, length, arr1); // sort array from 2 -> 1
}

int main()
{
	int arr[] = {6,5,3,1,8,7,2,4};
	int length = sizeof(arr)/sizeof(arr[0]);

	cout << "array before sort: ";
	print(arr, length);

	topDownMergeSort(arr, length);
	
	cout << "array before sort: ";
	print(arr, length);


	return 0;
}