//31. Write a C++ program to reverse an array of integer values
#include<iostream>
using namespace std;

int main()
{
	int arr[20],arr2[20],n,i;
	cout<<"Enter number of elements : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<(i+1)<<" : ";
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr[((n-1)-i)];
	}
	cout<<endl<<"Reverse of Array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr2[i]<<"\t";
	}
}

/*
Enter number of elements : 5
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 3
Enter element 4 : 4
Enter element 5 : 5

Reverse of Array :
5       4       3       2       1
*/
