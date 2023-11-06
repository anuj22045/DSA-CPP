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




//data ask from the user
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int data[n];

    cout << "Enter the elements of the array in ascending order:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int target;
    cout << "Enter the target element to search for: ";
    cin >> target;

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (data[mid] == target) {
            cout << "The target element is found at index: " << mid << endl;
            return 0;
        } else if (data[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "The target element is not found." << endl;
    return 0;
}

