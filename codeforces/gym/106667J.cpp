#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000 * 2 + 5;

int seg[4*MAXN];
int v[MAXN];
int posx[MAXN];

void build(int p, int l, int r){
    
    if (l == r){
        seg[p] = v[l]; 
        return;
    }
    
    int m = (l+r)/2;
    build(2*p,l,m); build(2*p+1, m+1, r);
    seg[p] = max(seg[2*p], seg[2*p+1]);
    }


int query(int p, int l, int r, int a, int b){

    if (r < a || l > b) return -1;
    if (l >= a && r <= b) return seg[p];

    int m = (l+r)/2;
    return max(query(2*p, l, m, a,b), query(2*p+1, m+1, r, a, b));
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    for (int i=1; i <= n; i++){
        cin >> v[i]; posx[v[i]] = i;
    };
    build(1, 1, n); 
    while (q--){

        int a, b; cin >> a >> b;
        int posmx = posx[query(1, 1,  n, a, b)];
        int l = posmx-a; 
        int r = b-posmx;
        int winner = 1;
        if (l == 0 || r == 0) winner = 1; else{
         
         if ((l % 2) == (r % 2)) winner = 0; else winner = 1;

        }

         



        if (winner) cout << "Adilson"; else cout << "Reginaldo"; cout << endl;
    }

    return 0;

}
