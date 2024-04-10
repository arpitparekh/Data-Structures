#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int s = 0;
    int e = size;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){  // present is first half
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){  // find middle element in short

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<"Element found at location "<<binarySearch(arr,n,key)<<endl;

    // for time complexity checkout below image
    // https://imgbox.com/YNJxVSVk

}