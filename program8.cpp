//Sort first half in ascending order and second half in descending

#include<iostream>
#include<conio.h>
using namespace std;
void acendanddecend(int arr[] , int n)
{
	int temp;
	for(int i = 0;i<n-1;i++)
	{
		for(int j = 0;j<n/2;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		for(int j = n/2;j<n-1;j++)
		{
			if(arr[j] < arr[j+1])
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
	cout<<"Enter the number of elements : ";
	int n =0;
	cin>>n;

	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	acendanddecend(arr , n);
	getch();
}