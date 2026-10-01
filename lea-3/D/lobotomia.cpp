#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // six = 1, seven = 0
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++){
        unsigned int x;
        cin >> x;

        v[i] = {__popcount(x), x};
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << v[i].second;
    }
    cout << "\n";

}