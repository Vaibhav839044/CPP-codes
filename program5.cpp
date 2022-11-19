//C++ Program to Reverse elements of an array


#include<iostream>
#include<conio.h>
using namespace std;
void reversearray(int arr[] , int n)
{
	for(int i = n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
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

	reversearray(arr , n);

	
	getch();
}