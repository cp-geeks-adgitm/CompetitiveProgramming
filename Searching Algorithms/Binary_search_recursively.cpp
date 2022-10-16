#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int left, int right, int target)
{
        if(left>right)
        return -1;
    
        int mid = left + (right-left)/2;

        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        binarySearch(arr, n, left, mid-1, target);
        else
        binarySearch(arr, n, mid+1, right, target);
    
    
    
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];

    int target;
    cin >> target;

    int find = binarySearch(arr, n, 0, n-1, target);
    cout << find << endl;

return 0;
}