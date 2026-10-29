#include <bits/stdc++.h>
using namespace std;

struct Comparador{
    bool operator()(const string &a, const string &b) const{
        if (a.size() != b.size())
            return a.size() < b.size();
        return a < b;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    //comparador lambda; primeiro tamanho e depois ordem alfabética
    sort(v.begin(), v.end(), Comparador());

    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";
    }
}
