//INSERTION SORT - Select the element and compare it from previous elements and find its correct position
// sort - 34 32 21 3 4
// steps -> 32 34 21 3 4
// - 21 32 34 3 4
// - 3 21 32 34 4
// - 3 4 21 32 34

// inplace (no extra space) and stable algo
// TC -> O(N^2)  SC -> O(1)

#include<iostream>
using namespace std;
int main()
{
    
    int i, key, j;
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
