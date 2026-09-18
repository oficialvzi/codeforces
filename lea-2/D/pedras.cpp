#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    while(n--){
        string b;
        cin >> b;

        stack<char> abertos;
        int ouro = 0;

        for (int i = 0; i < b.size(); i++){
            if (b[i] == '<'){
                abertos.push(b[i]);
            }else if (b[i] == '>'){
                if (!abertos.empty()){
                    abertos.pop();
                    ouro++;
                }
            }
        }

        cout << ouro << "\n";
    }
}