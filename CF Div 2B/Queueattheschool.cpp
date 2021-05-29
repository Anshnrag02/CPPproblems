#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,t;
    cin>>n>>t;
    string a;
    cin>>a;
    while(t--){
        for (int i =0; i<n-1 ; i++){
            if (a[i]=='B' && a[i+1]=='G'){
                swap(a[i], a[i+1]);
                i++;
            }
        }
    }
    cout<<a;
}