#include<iostream>
using namespace std;

// input [1,2,1,2,3]

/*    ^ is the symbol of XOR

 0 XOR 0 = 0
 0 XOR 1 = 1
 1 XOR 0 = 1
 1 XOR 1 = 0

*/

int findUniqueElement(int arr[],int n){
    int result = 0;

    for(int i=0;i<n;i++){
        result = result^arr[i];
    }
    return result;
}

int main(){

    // we will use XOR

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Unique Element is : "<<findUniqueElement(arr,n)<<endl;


    /*
        The given program has a time complexity of O(n), 
        where n is the size of the input array. This is because both the findUniqueElement function and the main function iterate through the array once, 
        resulting in linear time complexity relative to the input size.
    
    */

}