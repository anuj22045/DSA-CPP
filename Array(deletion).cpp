#include<iostream>
using namespace std;
int main()
{
    int a[10],n,del;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elemens in the array are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
       int loc;
       cout<<"enter the lements to delete"<<endl;
       cin>>del;
       //searching position
       for(int i=0;i<n;i++)
       {
        if(a[i]==del)
        {
            loc=i;
            break;
        }
       }
        for(int i=loc;i<n;i++)
        {
            a[i]=a[i+1];
        }
        cout<<"traverse after deletion"<<endl;
        
            for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }return 0;
}
