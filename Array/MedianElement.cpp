#include<bits/stdc++.h>
using namespace std;

void Median(int arr[],int size){
    sort(arr,arr+size);
    if(size%2==0){
        int ind1=(size/2)-1;
        int ind2=(size/2);
        cout<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else{
        cout<<arr[(size/2)];
    }

}
int main(){

int arr[]={1,2,3,4,5,6};
int size=sizeof(arr)/sizeof(arr[0]);

Median(arr,size);


    return 0;
}