//Calculate the sum of elements in an array

#include<iostream>
#include<conio.h>
using namespace std;
int sum(int *arr , int n)
{
	int isum = 0;
	for(int i = 0;i<n;i++)
	{
		isum = isum + arr[i];
	}
	cout<<isum;
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
	sum(arr , n);
	getch();
}