//Find largest element in the array


#include<iostream>
#include<conio.h>
using namespace std;
int largestele(int *arr, int n)
{
	int largest = 0;
	int element = arr[0];
	for(int i = 0;i<n;i++)
	{
		for(int j = 1;j<n;j++)
		{
			if(element < arr[j])
			{
				element = arr[j];
			}
		}
	}
	cout<<"Largest element in the array is :"<< element;
}
int main()
{
	int n = 0;
	cin>>n;
	int arr[n];
	int i;
	//Taking the array as input
	for(i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	
    //printing array
	
	largestele(arr , n);
    

	getch();
}