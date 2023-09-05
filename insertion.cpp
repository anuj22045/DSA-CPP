#include<iostream>
using namespace std;
int main()
{
    int a[10],size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"elements of array are:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    int pos,ele;
    cout<<"enter the position you want to insert"<<endl;
    cin>>pos;
    cout<<"enter the elements you want to insert"<<endl;
    cin>>ele;
    for(int i=size;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=ele;
    cout<<a[size]<<endl;
    cout<<"traversal after insertion"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"\t"<<endl;
    }
    return 0;
}
