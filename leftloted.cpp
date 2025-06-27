#include<iostream>
using namespace std;
int left(int arr[], int n);
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    left(arr,n);
   
   return 0;

}

int left(int arr[], int n){
    int j;
    for(int i=1; i<n; i++){
        int key = arr[i];
        for( j=i-1; j>=0 && key<arr[j]; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
    cout<<"The left loted array is : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
