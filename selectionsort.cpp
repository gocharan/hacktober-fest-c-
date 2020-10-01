# include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 1, 2, 3};
    int i,j;
    int size = 5;
    int minindex;
    int tmp;
    cout << "unsorted array is: ";
    for (i=0;i<size;i++)
        cout<<arr[i];
    //sorting the array
    for (i=0;i<size-1;i++)//decresing the loop one time
    {
        minindex = i;
        for (j=i+1;j<size;j++)
        {
           if (arr[minindex]>arr[j])
                minindex=j;

        }
        tmp = arr[minindex];
        arr[minindex]= arr[i];
        arr[i] = tmp;
    }
    cout<<"\nsorted array is :";
    for (i=0;i<size;i++)
        cout<<arr[i];
}
