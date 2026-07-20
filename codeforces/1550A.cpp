#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;
#define fi first
#define se second
const int INF = 1e9;

// s: tamanho atual do array de moedas
// soma: soma acumulada dos valores escolhidos
// ultimo: o valor do último elemento adicionado
// target: a soma objetivo (S) do problema
pii r(int s, int soma, int ultimo, int target) {
    // 1. Casos de parada
    if (soma == target) return {soma, s};
    if (soma > target) return {INF, s};

    // Aumentamos o tamanho do array porque vamos colocar mais um elemento
    s++;

    // 2. Nossas 3 decisões possíveis para o próximo elemento:
    
    // Opção A: Repetir o elemento atual (ex: se o último foi 3, colocamos outro 3)
    pii op_igual = r(s, soma + ultimo, ultimo, target);
    
    // Opção B: Adicionar um elemento de valor (último + 1)
    pii op_mais_1 = r(s, soma + ultimo + 1, ultimo + 1, target);
    
    // Opção C: Adicionar um elemento de valor (último + 2)
    pii op_mais_2 = r(s, soma + ultimo + 2, ultimo + 2, target);

    // 3. Escolher a melhor decisão (a que minimiza o tamanho 'se')
    pii melhor = {INF, INF};

    // Função auxiliar simples para comparar os caminhos válidos
    auto atualiza_melhor = [&](pii caminho) {
        if (caminho.fi < INF) { // Se o caminho for válido
            if (melhor.fi == INF || caminho.se < melhor.se) {
                melhor = caminho;
            }
        }
    };

    atualiza_melhor(op_igual);
    atualiza_melhor(op_mais_1);
    atualiza_melhor(op_mais_2);

    return melhor;
}

void solve() {
    int target; cin >> target;
    
    // Iniciamos com tamanho 1, soma acumulada 1, e o primeiro elemento sendo obrigatoriamente 1
    pii ans = r(1, 1, 1, target);
    
    cout << "Soma atingida: " << ans.fi << " | Tamanho mínimo: " << ans.se << endl;
}

int main() {
    solve();
    return 0;
}
