//To find the index of the element in the array

#include<iostream>
#include<conio.h>
using namespace std;
int linearsearch(int arr[] , int n , int key)
{
	for(int i = 0;i<n;i++)
	{
		if(arr[i] == key)
		{
			return i;
		}

	}

	return -1;

	
}
int main()
{
	int iret = 0;
	cout<<"Enter the number of elements: ";
	int n = 0;
	cin>>n;

	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
    cout<<"Enter the key to find: ";
	int key = 0;
	cin>>key;

	iret = linearsearch(arr , n , key);
	cout<<iret;
	getch();
}