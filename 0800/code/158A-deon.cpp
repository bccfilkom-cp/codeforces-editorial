#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
int arr[n];
int ans=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int poinK=arr[k-1];
for(int i=0;i<n;i++){
    if(arr[i]>=poinK && arr[i])
    ++ans;
}
cout<<ans;
    return 0;
}