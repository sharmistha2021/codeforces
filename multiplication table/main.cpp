#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, counter = 0;
    scanf("%d%d", &n, &x);
    //cin >> n >> x;
    for(int i = 1; i <= n; i++){
        if(x%i == 0 && x/i <= n){
               // cout << i << endl;
            counter++;
        }

    }
   // cout << counter << endl;
   printf("%d", counter);
    return 0;
}
