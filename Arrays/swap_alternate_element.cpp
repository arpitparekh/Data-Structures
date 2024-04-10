#include<iostream>
using namespace std;

// 0,1,2,3,4,5

void swapAlternate(int arr[],int size){
    // int temp;
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]); // we can use swap function instead of temp variable
            // temp = arr[i];
            // arr[i]=arr[i+1];
            // arr[i+1]=temp;     
        }
    }

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swapAlternate(arr,n);

    /*

    Even though the printing operation takes O(n) time and the swapping occurs for a fraction of the input size, 
    the overall time complexity remains O(n), 
    because the dominant factor remains the same—the linear iteration through the array.

    */

}

