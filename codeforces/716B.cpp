#include <bits/stdc++.h>

using namespace std;

int main(){

  string s; cin >> s;
  if (s.size() < 26){
    cout << -1 << "\n";
    return 0;
   }
  
   for (int i=0; i < s.size() - 25; i++){


   vector<int> freq(26, 0);
    bool valid = 1;
   for (int j=i; j < i+26; j++){
    if (s[j] != '?'){
    freq[s[j] - 'A']++;
}
    if (s[j] != '?' && freq[s[j] - 'A'] > 1){
        valid = 0;
        break;
          }
        }
   if (valid){
   vector<bool> al(26, 1);
   queue<int> q;
   for (int k =i; k < i+26; k++){
      
     if (s[k] != '?'){
     al[s[k] - 'A'] = 0;
      }
   }

   for (int k=0; k < al.size(); k++){
    if (al[k] == 1){
     q.push(k);
    }   }

   for (int k=0; k < i; k++){
      if (s[k] == '?') cout << 'A';
      else cout << s[k];
    }
   
   for (int k=i; k < i+26; k++){
   char l = s[k];
   if (l == '?'){
      l = q.front() + 'A';
      q.pop();
    } 
   cout << l;
}
   for (int k=i+26; k < s.size(); k++){
   
    if (s[k] == '?') cout << 'A';
    else cout << s[k];
   }
   cout << "\n";
   return 0;
  
   }



 
   }
  cout << -1 << "\n";
  


  return 0;
}
