#include <iostream>
using namespace std;
void bubblesort(int arr[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }

    }
}
int main()
{
    int arr[]= {6,3,5,4,1,2,7};
    int size=7;
    int i,j;
    cout<<"unsorted array is: ";
    for(i=0;i<size;i++)
        cout<<arr[i];
    bubblesort(arr,size);
    cout<<"\nsorted array is: ";
    for(i=0;i<size;i++)
        cout<<arr[i];
}

