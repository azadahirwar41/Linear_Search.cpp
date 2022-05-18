#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int show){
    for( int i = 0 ; i < n ; i++ ){
        if( arr[i] == show){
            return i;
        }
    }
    return -1;
}

int main(){
    int r;
    cout<<"Enter no of elements : ";
    cin>>r;

    int arr[r];

    cout<<"Enter elements : ";
    for(int i=0 ; i<r; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you want to search : ";
    cin>>key;

    cout<<"Element found at "<<linearSearch(arr,r,key)<<" th index "<<endl;
}
