#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   // uma mesa do restaurante so cabem 4 pessoas
   // as pessoas vem ao restaurante em grupos e queremos usar o minimo de mesas possiveis
   // podemos colocar diferentes grupos numa mesma mesa desde que não separemos os grupos
   // diga a quantidade minima de mesas a ser usada
   // input: 4 inteiros correspondendo respectivamente a quantidade de grupos com 1, 2, 3 e 4 pessoas.
   // output: um inteiro com a quantidade minima de mesas

   int a, b, c, d; cin >> a >> b >> c >> d;
   int ans = d;// grupos de 4 obrigatoriamente ocupam 1 mesa
   
   ans += c; // grupos de 3 agora ocupam uma mesa
   
   if (c > 0 && a > 0){
	a = max(0, a - c); // tentamos encaixar o maximo possivel de pessoas do grupo 1 na de 3
    }

   if (b > 0 && b % 2 == 1){// se é impar significa que alguma vai ficar
	b--;// tornamos par
	ans++;// a mesa q ficou 2 sem completar fica so com 2
	a = max(0, a-2);// tentamos completar ela com 2 pessoas da 1;
   }
 
  if (b > 0){
  ans += b/2;// coloca os pares em mesas
  }
    
  if (a > 0){// so tem 1
      ans += (a+3)/4;// tentamos colocar eles em mesas
      
   }

  cout << ans << "\n";


   return 0;
}

