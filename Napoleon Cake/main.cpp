#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
       int n;
       vector < int > v;
       cin >> n;
       for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.push_back(a);
       }
       vector < int > ans;
       int a = 0;
       while(n--){
            a = max(a, v[n]);

            if(a != 0 || v[n] != 0){
                ans.push_back(1);
                a--;
            }
            else{
                ans.push_back(0);
            }
       }
       for(int i = ans.size()-1; i >= 0; i--){
            cout << ans[i] << " ";
       }
       cout << endl;
    }
    return 0;
}
