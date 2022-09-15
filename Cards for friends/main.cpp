#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int w, h, n, flag = 1;
        cin >> w >> h >> n;

                while(w%2 == 0){
                    w = w / 2;
                   // if(w%2 == 0){
                        flag = flag + flag;
                   // }
                   // else{
                    //    flag++;
                    //}
                }

                while(h%2 == 0){
                    h = h / 2;
                   // if(h%2 == 0){
                        flag = flag + flag;
                   // }
                   // else{
                    //    flag++;
                    //}
                }

      if(flag >= n){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
    }
    return 0;
}
