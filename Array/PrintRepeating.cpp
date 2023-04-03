#include <bits/stdc++.h>
using namespace std;
void repeatingEles(int arr[], int size)
{
    int dup[size];
    int cnt = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                dup[cnt++] = arr[i];
            }
        }
    }
    cout << "The repaeting elements are: ";
    for (int i = 0; i < size; i++)
    {
        if (dup[i] != dup[i + 1])
        {
            cout << dup[i] << " ";
        }
    }
}


void sortingMethod(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}


void usingHash(vector<int> &arr){
    unordered_map<int,int> mp;
    for(auto i:arr){
        ++mp[i];
    }

    cout<<"the repeating elements are: ";
    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
}
int main()
{

    // int arr[] = {1, 1, 2, 2, 3, 4, 5, 6};
    vector<int> v={1, 1, 2, 2, 3, 4, 5, 6};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // repeatingEles(arr, n);

    // sortingMethod(v,v.size());

    usingHash(v);

    return 0;
}