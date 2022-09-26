#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int circle = abs(b - a) * 2;
        if(circle < max(a, b) || circle < c){
            cout << "-1" << endl;
        }
        else{
            int opp;
            int div = (circle / 2);
            if(div >= c){
                opp = div + c;
            }
            else{
                opp = c - div;
            }
            cout << opp << endl;
        }
       // cout << diff << endl;
    }
    return 0;
}
