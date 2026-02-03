#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define allr(a) a.rbegin(), a.rend()
#define pb push_back
#define forn(n) for(int i = 0;i<n;i++)

// Tip: always use long int data type instead of int 
// use macro for fast typing 




// always carry some predefine function or algorithm 
// pre define algo libarary - CP Algorithm (https://cp-algorithms.com/index.html)

int mex(vector<ll> const& A) { // MEX calculation needed for many problem
    static bool used[MAX_N+1] = { 0 };

    // mark the given numbers
    for (int x : A) {
        if (x <= MAX_N)
            used[x] = true;
    }

    // find the mex
    int result = 0;
    while (used[result])
        ++result;

    // clear the array again
    for (int x : A) {
        if (x <= MAX_N)
            used[x] = false;
    }

    return result;
}

void solve(){


  // start coding



}


int main(){
  fast
  int t; cin >> t;
  while(t--){
        // main code here
        solve()

  }
  
}
