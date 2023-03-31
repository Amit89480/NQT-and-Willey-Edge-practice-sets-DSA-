#include<bits/stdc++.h>
using namespace std;

void Frequency(int arr[],int n){

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}


void FrequencyCount(int arr[],int n){
    vector<bool> visited(n,false);

    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }

        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
       cout<<arr[i]<<" "<<count<<endl;
    }
}
int main(){


int arr[]={3,4,5,6,3,2,4};

int size=sizeof(arr)/sizeof(arr[0]);
// Frequency(arr,size);
FrequencyCount(arr,size);




    return 0;
}