#include <bits/stdc++.h>
using namespace std;

struct No
{
    int valor;
    No *esq;
    No *dir;
};

// se chegou num lugar vazio cria o no, se nao vai pra esquerda (menor) ou direita (maior)
No *inserir(No *raiz, int valor)
{
    if (raiz == NULL)
    {
        No *novo = new No;
        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }

    if (valor < raiz->valor)
    {
        raiz->esq = inserir(raiz->esq, valor);
    }
    else
    {
        raiz->dir = inserir(raiz->dir, valor);
    }

    return raiz;
}

// esquerda, raiz, direita
void infixa(No *raiz)
{
    if (raiz == NULL)
        return;
    infixa(raiz->esq);
    cout << " " << raiz->valor;
    infixa(raiz->dir);
}

// raiz, esquerda, direita
void prefixa(No *raiz)
{
    if (raiz == NULL)
        return;
    cout << " " << raiz->valor;
    prefixa(raiz->esq);
    prefixa(raiz->dir);
}

// esquerda, direita, raiz
void posfixa(No *raiz)
{
    if (raiz == NULL)
        return;
    posfixa(raiz->esq);
    posfixa(raiz->dir);
    cout << " " << raiz->valor;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    No *raiz = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        raiz = inserir(raiz, x);
    }

    cout << "In.:";
    infixa(raiz);
    cout << "\n";

    cout << "Pre:";
    prefixa(raiz);
    cout << "\n";

    cout << "Pos:";
    posfixa(raiz);
    cout << "\n";
}