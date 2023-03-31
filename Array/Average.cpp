#include <bits/stdc++.h>
using namespace std;
void Average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Average of an Array is->" << sum / size << endl;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Average(arr, size);

    return 0;
}