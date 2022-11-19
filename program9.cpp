//C++ program to sort elements of the given array

#include<iostream>
#include<conio.h>
using namespace std;
void sortelements(int arr[] , int n)
{
	int temp;
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	cout<<"Enter the number of elements: ";
	int n = 0;
	cin>>n;

	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}

	sortelements(arr , n);
	getch();
}