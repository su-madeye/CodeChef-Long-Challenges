/*
	Problem:	Strange Number
	Code: 		STRNO
	Link:		https://www.codechef.com/APRIL20B/problems/STRNO
	Language:	C++
	Author:		Prakhar Tibrewal
	Score: 		100pts
*/

// Solution: 

#include <bits/stdc++.h>

#define ll long long int 
#define ff(i,a,b) for(ll i = a; i < b; i++)
#define bf(i,b,a) for(ll i = b-1; i >= 0; i--)
#define itf(i,a) for(auto i = a.begin(); i != a.end(); i++)
#define mii map<int,int>
#define vi vector<int> 
#define tc ll t; cin>>t; while(t--)

using namespace std;

ll check(ll n, ll k){
    vi v;
    while(n%2 == 0){
        n /= 2;
        v.push_back(2);
    }
    for (int i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            v.push_back(i); 
        } 
    }
    if (n > 2) 
        v.push_back(n);
    if(v.size() < k)    
        return 0;
    else    
        return 1;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc{
        ll x,k;
        cin >> x >> k;
        cout << check(x,k) << endl;
    }
}

