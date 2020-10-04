#include <iostream>
using namespace std;
int main()
{
  int size,i,a[50],pos,num;
  cout<<"enter the size";
  cin>>size;
  if(size>50){
    cout<<"error";
  }
  else
  {
    cout<<"enter elements in array";
    for(i=0;i<size;i++)
    {
      cin>>a[i];
    }
    cout<<"enter position: ";
    cin>>pos;
    if(pos<=0 || pos>size)
    {cout<<"error";
    }
    else{
      for(i=pos-1;i<size-1;i++)
      {
        a[i]=a[i+1];
      }
      size--;
      for(i=0;i<size;i++)
      {cout<<a[i];
      }
    }
  }
}

