#include<iostream>
#include<conio.h>
using namespace std;
int secondlarge(int *arr , int n)
{
	int max = arr[0];
	int sec_max = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j = 1;j<n;j++)
		{
			if(max < arr[j])
			{
				max = arr[j];
			}
		}
	}

	for(int i = 0;i<n;i++)
	{
		for(int j =1;j<n;j++)
		{
			if(sec_max < arr[j] && arr[j] != max)
			{
				sec_max = arr[j];
			}
		}
	}
	cout<<"second largest element in the array is: "<<sec_max;
}
int main()
{
	int n = 0;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	secondlarge(arr , n);
	getch();
}