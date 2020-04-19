/*
	Problem:	Unit GCD
	Code: 		UNITGCD
	Link:		https://www.codechef.com/APRIL20B/problems/UNITGCD
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

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc{
        ll n;
        cin >> n;
        ll j = 1;
        if(n == 1){
            cout << "1\n1 1\n";
        }
        else if(n%2 == 0){
            cout << n/2 << "\n";
            ff(i,0,n/2){
                cout << "2 " << j << " ";
                j++;
                cout << j << "\n";
                j++;
                if(j >=n)
                break;
            }
        }
        else{
            cout << n/2 << "\n";
            j += 2;
            ff(i,0,n/2){
                if(i == 0){
                    cout << "3 1 2 " << n << "\n";
                }
                else{
                    cout << "2 " << j << " ";
                    j++;
                    cout << j << "\n";
                    j++;
                }
                if(j>=n)
                    break;
            }               
        }
    }
}

