#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int a;

    //guarda quantos crimes cada pessoa ja cometeu
    map<string, int> crimes;

    while(cin >> s >> a && !(s == "fim" && a == 0)){
        if(crimes[s] == 0){
            cout << s << " eh reu primario" << "\n";
        }else{
            cout << s << " eh reincidente com " << crimes[s] << " crime(s)" << "\n";
        }
        crimes[s]++;
    }
}
