#include <iostream>
#include <vector>

// se for primo retorna 1
bool ehPrimo(long long n)
{
    int count = 0;
    if (n == 0)
        return false;
    if (n == 1)
        return false;
    if ((n > 2) && (n % 2 == 0))
        return false;

    // contar os divisores de n (numero q estamos checando se é primo)
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    // se tiver um divisor, não é primo
    if (count > 0)
        return false;
    else
        return true;
}

bool ehPrimoGemeo(long long n){
    if(!ehPrimo(n)) return false;

    return ehPrimo(n - 2) || ehPrimo(n + 2);
}

int main()
{
    // optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N = 0;
    std::cin >> N;

    // capturar os numeros a serem checados
    std::vector<long long> V(N);
    for (int i = 0; i < N; i++){
        std::cin >> V[i];
    }

    // primo ou não
    for (int i = 0; i < N; i++){
        if (ehPrimoGemeo(V[i]) == true){
            std::cout << "O numero " << V[i] << " eh um primo gemeo" << "\n";
        }else{
            std::cout << "O numero " << V[i] << " nao eh um primo gemeo" << "\n";
        }
    }

    return 0;
}