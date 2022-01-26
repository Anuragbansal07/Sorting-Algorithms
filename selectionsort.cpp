//SELECTION SORT -> Select the minimum element and swap it with the first and so on..
// SORT => 23 2 12 3 34 11
//STEPS - 2 23 12 3 34 11
// - 2 3 12 23 34 11
// - 2 3 11 23 34 12
// - 2 3 11 12 34 23
// - 2 3 11 12 23 34

//INPLACE(no extra space) AND not a STABLE ALGORITHM
// TC - O(N^2) SC - O(1)

#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int min_index; 
    for (int i=0;i<n;i++){
        min_index = i;
        for(int j = i+1;j<n;j++)if (a[j] < a[min_index])min_index=j;
        // swapping
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
