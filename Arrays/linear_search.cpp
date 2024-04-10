#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter the size of an Array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Element arr["<<i<<"] = ";
        cin>>arr[i];
    }

    cout<<"Enter the element that you want to find in Array"<<endl;

    int key;
    cin>>key;

    cout<<"Element found at location = "<<linearSearch(arr,n,key)<<endl;   
    
    // time complexity is O(n)

}