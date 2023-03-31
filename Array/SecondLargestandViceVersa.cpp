#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n){
    if(n==0 || n==1){
        cout<<-1<<-1<<endl;
    }


    int small=INT_MAX,SecondSmall=INT_MAX;
    int large=INT_MIN,SecondLarge=INT_MIN;

    for(int i=0;i<n;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]<SecondSmall && arr[i]!=small){
            SecondSmall=arr[i];
        }
        if(arr[i]>SecondLarge && arr[i]!=large){
            SecondLarge=arr[i];
        }
    }
    cout<<SecondSmall<<" "<<SecondLarge<<endl;
}
int main(){
int arr[]={3,4,5,1,2,3};
int n=sizeof(arr)/sizeof(arr[0]);

getElements(arr,n);





    return 0;
}