#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
            int d, ans;
            cin >> d;
            ans = (1 + d);
            if(isPrime(ans)){
                cout <<
            }
//            while(!isPrime(ans)){
//                ans += 1;
//            }
//            cout << ans * (ans + d) << endl;
    }
    return 0;
}
