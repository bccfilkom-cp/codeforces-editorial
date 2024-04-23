#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int freq[26] = {0};
        string s;
        int n,k;
        cin >> n >> k >> s;
        for (auto &ch : s) { 
            freq[(int)static_cast<unsigned char>( ch ) - 97]++;
        } 
        int oddsum = 0;
        for(int i=0;i<26;i++){
            if(freq[i] % 2 != 0){
                oddsum++;
            }   
        }
        if(oddsum <= k +1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}