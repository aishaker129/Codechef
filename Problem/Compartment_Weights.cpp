#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    long t; cin>>t;
    while(t--){
        long n; cin>>n;
        long a[n];
        for(long i=0; i<n; i++) cin>>a[i];
        long q; cin>>q;
        while(q--){
            long x,y,z;
            cin>>x>>y>>z;
            for(long i=x-1; i<y; i++){
                a[i] +=z;
            }
        }

        long sum =0;
        for(long i = 0; i<n; i++){
            sum +=a[i];
        }
        cout<<sum<<endl;
        
    }

    return 0;
}