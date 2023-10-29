#include<iostream>
using namespace std;
int main()
{
    int data[]={1,2,3,4,5};
    int target=6;
    int n= sizeof(data)/ sizeof(data[0]);

    for(int i=0;i<n;i++){
        if(data[i]==target){
            cout<<"the target element is found at index:"<<i<<endl;
            return 0;
        }
    }
    cout<<"the target element is not found"<<endl;
    return 0;
}
