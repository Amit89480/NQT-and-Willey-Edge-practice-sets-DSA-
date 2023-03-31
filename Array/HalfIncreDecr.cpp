#include<bits/stdc++.h>
using namespace std;
void Halfincredecre(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
       if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
       }
        }
    }

    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=n-1;i>=n/2;i--){
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[],int n){
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
       if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
       }
        }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[]={8, 7, 1, 6, 5, 9};
int size=sizeof(arr)/sizeof(arr[0]);
Halfincredecre(arr,size);
// sort(arr,size);


    return 0;
}