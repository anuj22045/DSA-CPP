#include<iostream>
using namespace std;
int main()
{
    int a[20],n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];   
     }
     cout<<"elements of array are:"<<endl;
        for(int i=0;i<n;i++)
     {
        cout<<a[i]<<endl;
     }
     for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(a[i]>a[j])
         {
            int k=a[i];
            a[i]=a[j];
            a[j]=k;
         }
      }
     }
     cout<<"traverse after sorting"<<endl;
     for(int i=0;i<n;i++)
     {
      cout<<a[i]<<endl;
     }

}
