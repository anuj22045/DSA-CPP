#include<iostream>
using namespace std;
int main()
{
   int data[]={3,5,6,8,15,78,90};
   int target=78;
   int n=sizeof(data)/ sizeof(data[0]);
   int low=0;
   int high=0;
       high=n-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(data[mid]==target){
        cout<<"the target element is found at index:"<<mid<<endl;
        return 0;
    }
    else if(data[mid]<target){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
   cout<<"the target element is not found"<<endl;
   return 0;
}
