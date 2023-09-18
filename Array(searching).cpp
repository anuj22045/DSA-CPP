#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"enter the sie of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements in the array are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    int ser,found=0,loc;
    cout<<"enter element to search"<<endl;
    cin>>ser;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ser)
     {
      loc=i;
      found++;
      break;
     }
    }
    if(found>0)
    {
        cout<<"elements\t"<<ser<<"found at location\t"<<loc<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
return 0;
}
