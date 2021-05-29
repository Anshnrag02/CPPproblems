#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<int> a;
    a.push_back(1);
    ll temp;
    for(ll i=1; i<=m ; ++i){
        cin>>temp;
        a.push_back(temp);
    }
    ll ans=0;
    for(int i=0; i<a.size()-1 ; ++i){
        if(a[i]<=a[i+1]){
            ans+=a[i+1]+a[i];
        }
        else{
            ans+= n-a[i]+a[i+1];
        }
    }
    cout<<ans<<endl;
}