#include<bits/stdc++.h>
using namespace std;

int main(){
    //optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b, num;

    cin >> n >> b;
    while(n--){
        cin >> num;

        cout << (num |= (1LL << b)) << "\n";  
    }
}