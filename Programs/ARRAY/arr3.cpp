//3. Program to left rotate the elements of an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	int arr2[20],t0;
	t0=arr[0];
	for(i=0;i<n;i++)
	{
		if(i==(n-1))
		{
			arr2[n-1]=t0;
		}
		else
		{
			arr2[i]=arr[i+1];
		}
	}
	cout<<endl<<"Modified array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr2[i];
	}
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 3
Enter element 4 : 4
Enter element 5 : 5

Modified array :
      2       3       4       5       1
*/
