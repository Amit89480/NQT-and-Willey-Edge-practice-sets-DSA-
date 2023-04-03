#include<bits/stdc++.h>
using namespace std;
void nonRepeating(int arr[],int size){
    bool check;
    for(int i=0;i<size;i++){
        check=false;

        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                check=true;
                break;
            }
        }
        if(!check){
            cout<<arr[i]<<" ";
        }
    }

}


void usingHash(vector<int> &arr){
    unordered_map<int,int> mp;
    for(auto it:arr){
       ++mp[it];
    }
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }
}
  

int main(){
// int arr[]={1,2,3,1,2,3,5};
// int n=sizeof(arr)/sizeof(arr[0]);

// nonRepeating(arr,n);
   vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
  usingHash(nums);


return 0;
}