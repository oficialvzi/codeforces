#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string d;
    char dir = 'N';
    map<char, queue<string>> filas;

    vector<string> saida;

    while(cin >> d && d != "0"){
        if(d[0] == 'B'){
            filas[dir].push(d);
        }else{
            dir = d[0];
        }
    }
    

    string ordem = "NSLO";
    bool tirou = true;
    while(tirou){
        tirou = false;
        for(char c : ordem){
            if(!filas[c].empty()){
                saida.push_back(filas[c].front());
                filas[c].pop();
                tirou = true;
            }
        }
    }

    for(int i = 0; i < saida.size(); i++){
        if(i == saida.size() - 1){
            cout << saida[i];
        }else{
            cout << saida[i] << " ";
        }
    }
}