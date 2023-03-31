#include <iostream>
using namespace std;
int main()
{

    int arr[] = {2, 1, 3, 4, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << endl;
}