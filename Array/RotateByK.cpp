#include <bits/stdc++.h>
using namespace std;
void Rotate(vector<int> & arr, int size,int k)
{
    int a = k %size;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + a);
    reverse(arr.begin() + a, arr.end());


    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}
int main()
{

vector<int> arr={1,2,3,4,5,6};

// Rotate(arr,arr.size(),2);


cout<<2%9;

    return 0;
}