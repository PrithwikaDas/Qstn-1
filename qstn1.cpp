#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
     
void solve(){
    string s;
    cin >> s;
    stack<char> st;
    
    for(auto c: s){
        if(c == '('){
            if(st.size() > 0){
                cout << "(";
            }
            st.push(c);
        }else{
            st.pop();
            if(st.size() > 0){
                cout << c;
            };
        }
    }
}
     
int main(){
      
      ll t;
      t = 1;
    //   cin >> t;
      while(t--){
        solve();
      }
      return 0;
}
