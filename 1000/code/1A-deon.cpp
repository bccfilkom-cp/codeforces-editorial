#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
long long n,m,a;
cin>>n>>m>>a;
long long ans=ceil((double)m/a)*ceil((double)n/a);
cout<<ans ;
return 0;
}