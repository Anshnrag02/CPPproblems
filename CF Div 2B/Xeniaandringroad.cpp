#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,m;
    ll ans=0;
    cin>>n>>m;
    vector<ll> a;
    a.push_back(1);
    ll temp;
    for(ll i=1; i<=m ; ++i){
        cin>>temp;
        a.push_back(temp);
    }
    
    for(ll i=0; i<m ; ++i){
        if(a[i]<=a[i+1]){
            ans+=a[i+1]-a[i];
        }
        else{
            ans+= n-a[i]+a[i+1];
        }
    }
    cout<<ans<<endl;
    return 0;
}