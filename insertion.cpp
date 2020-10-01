#include <iostream>
using namespace std;

void insertionsort(int arr[],int size)
{
	int temp;
	int minindex;
	for (int i=0;i<size-1; i++)
	{
		minindex = i;
		for(int j= i+1;j<size;j++)
		{
			if(arr[minindex] > arr[j])
				minindex=j;
		}
		temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}
int main()
{
	int arr[]={4,3,5,1,2};
	int i,j;
	int size=sizeof(arr)/sizeof(int);
	cout<<"unsorted array";
	for(int i=0;i<size;i++)
		cout<<arr[i];
	insertionsort(arr,size);
	cout<<"\nsorrted array:";
	for(int i=0;i<size;i++)
		cout<<arr[i];
}
