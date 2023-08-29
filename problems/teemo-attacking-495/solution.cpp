# include <bits/stdc++.h>


using namespace std;


// Toda vez que o teemo atacar, devemos somar ao tempo total envenenada
// o tempo total de duracao do envenenamento ou entao caso o tipo ataque
// enquanto ela esta envenenada devemos adicionar o intervalo de tempo
// ate o ataque em questao, ou seja:

// Devemos adicionar ao tempo total o minimo entre a duracao do envenenamento
// e o intervalo entre os ataques
int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    int n = timeSeries.size();
    if (n == 0) return 0;

    int total = 0;
    for (int i = 0; i < n - 1; i++) {
        total += min(timeSeries[i + 1] - timeSeries[i], duration);
    }
    return total + duration;
}
