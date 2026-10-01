#include <bits/stdc++.h>
using namespace std;

long long producao(vector<int>& c, long long x){
    long long total = 0;
    for(int i = 0; i < c.size(); i++){
        total = total + (x/c[i]);
    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, t;
    cin >> n >> t;
    vector<int> c(n);

    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    
    long long lo = 1;
    long long hi = (long long)t * 100000;
    while (lo < hi){
        long long mid = (lo + hi)/2;
        if(producao(c, mid) >= t){
            hi = mid;
        }else{
            lo = mid + 1;
        }
    }

    cout << lo << "\n";
}