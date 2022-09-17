#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int pos_first= 0, pos_last= 0, counter = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                pos_first = i;
                break;
            }
        }
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '1'){
                pos_last = i;
                break;
            }
        }
        if(pos_first == pos_last){cout << "0" << endl;}
        else{
        for(int i = pos_first; i <= pos_last; i++){
            if(s[i] == '0'){
                counter += 1;
            }
        }
        cout << counter << endl;}
    }
    return 0;
}
