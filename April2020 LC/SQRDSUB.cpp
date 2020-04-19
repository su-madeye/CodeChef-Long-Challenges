/*
	Problem:	Squared Subsequences
	Code: 		SQRDSUB 
	Link:		https://www.codechef.com/APRIL20B/problems/SQRDSUB 
	Language:	C++
	Author:		Prakhar Tibrewal
	Score: 		100pts
*/

// Solution: 

#include<bits/stdc++.h>

#define ll long long int
#define ff(i,a,b) for(ll i = a; i < b; i++)
#define bf(i,b,a) for(ll i = b-1; i >= 0; i--)
#define itf(i,a) for(auto i = a.begin(); i != a.end(); i++)
#define MII map<int,int> 
#define VI vector<ll> 
#define VC vector<char> 
#define VS vector<string> 
#define PB push_back
#define tc ll t; cin>>t; while(t--)
#define DISPV(v) itf(i,v) cout << *i << endl;
#define DISPM(m) itf(i,m) cout << *i.F << ' ' << *i.S << endl;

const int MOD = int(1e9) + 7;

using namespace std;

ll modif(ll a){
    ll c = 0;
    while(a%2 == 0){
        a /= 2;
        c++;
        if(c==2)
            break;
    }
    return c;
}

ll falsesubarray(VI v){
    ll c1 = 0, c2 = 0;
    ll total = 0;
    ll n = v.size();
    ff(i,0,n){
        if(v[i] >= 2)
            c1 = 0;
        else if(v[i] == 0)
            c1++;
        else{
            c1++;
            i++;
            for(;i<n;i++)
            {
                if(v[i] ==0)
                c2++;
                else
                break;
            }
            ll tmptotal = 0;
            tmptotal += c1;
            tmptotal += c1*c2;
            total += tmptotal;
            if(v[i] == 1)
            {
                c1 = c2;
                c2 = 0;
                i--;
            }
            else if(v[i] >1)
            {
                c1 = 0;
                c2 = 0;
            }
        }
    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc{
        ll n;
        cin >> n;
        VI v;
        ll a;
        ff(i,0,n){
            cin >> a;
            v.PB(modif(a));
        }       
        // itf(i,v)    cout << *i << " ";
        // cout << '\n';
        ll total = n * (n+1) / 2;
        // cout << total << '\n';
        ll x = falsesubarray(v);
        // cout << x << '\n';
        cout << total - x << "\n";
    }
}