// BUBBLE SORT -> in this two elements at a time which one is smaller, it will get swapped
// Sort => 23 32 21 34 11
// -> 23 32 21 34 11
// - 23 21 32 34 11
// - 23 21 32 34 11
// - 23 21 32 11 34
// - 21 23 32 11 34
// - 21 23 32 11 34
// - 21 23 11 32 34
// - 21 23 11 32 34
// - 21 11 23 32 34
// - 11 21 23 32 34
// - 11 21 23 32 34   ( we can cancel the cases to optimize if there is no swapping )

// inplace and a stable algo
// TC - O(N^2) SC - O(1)

#include<iostream>
using namespace std;
int main()
{
    int n ;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i= 0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if (a[j+1]<a[j]) {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp; 
        }
    }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
