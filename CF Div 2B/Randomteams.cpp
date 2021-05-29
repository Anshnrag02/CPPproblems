#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll c2(ll k){
    k=(k*(k-1))/2;
    return k;
}

int main(){
    ll m,n;
    cin>>n>>m;
    ll max,min;
    ll k=n-(m-1);
    max=c2(k);
    ll a=n/m;
    ll b=n%m;
    min=((m-b)*(c2(a)))+(b*(c2(a+1)));
    cout<<min<<" "<<max;
}