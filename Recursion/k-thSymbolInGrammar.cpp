#include<bits/stdc++.h>
using namespace std;

int solve(int n,int k){
    if(n==1 && k==1) return 0;    //base condition

    int mid = pow(2,n-1)/2;       //the mid element in the nth row

    if(k<=mid) return solve(n-1,k);      // as the element in (n-1)th row are same as in nth row till mid
    else return !solve(n-1,k-mid);       // as the element in nth row after mid is NOT of elements in (n-1)th row
}

int main(){
    int n,k;
    cin>>n>>k; // take input from user
    cout<<solve(n,k);
    return 0;
}