#include <iostream>
#include <vector>

int main(){
    // optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, P;
    //N = número crachás legítimos
    //P = número de pessoas q compareceram (e número de crachás)

    while(std::cin >> N >> P && N != -1 && P != -1){
        std::vector<int> frequencia(N+1, 0); //vetor bidimensional que vai armazenar a frequencia dos crachás repetidos

        int C;
        for (int i = 0; i < P; i++){
            std::cin >> C;
            if(C >= 1 && C <= N){
                frequencia[C]++;
            }
        }

        int soma = 0;

        for(int i = 1; i <= N; i++){
            if(frequencia[i] > 1){
                soma++; 
            }
        }

        std::cout << soma << '\n';
    }

    return 0;
}