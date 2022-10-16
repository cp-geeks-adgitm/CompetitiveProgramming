#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int left = 0, right = n-1;
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        right = mid-1;
        else
        left=mid+1;
    }
    return -1;
}
int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    cin >> arr[i];

    int target;
    cin >> target;
    int find = binarySearch(arr, n, target); // return index of target if target is present else return -1
    cout << find << endl;
return 0;
}