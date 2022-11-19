//find the smallest element in the array.

#include<iostream>
#include<conio.h>
using namespace std;
int smallestele(int *arr , int n)
{
	int min = arr[0];
	for(int i = 0;i<n;i++)
	{
		for(int j = 1;j<n;j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
			}
		}
	}
	cout<<"Smallest element in the array is: "<< min;
	

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

	smallestele(arr , n);

	getch();
}