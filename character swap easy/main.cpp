#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        string s, t;
        int n, flag = 0;
        //scanf("%d%s%s", &n, &s, &t);
        cin >> n;
        cin >> s >> t;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                swap(s[i], t[j]);
                if(strcmp(s, t) == 0){
                     printf("Yes\n");
                }
                else{
                    swap(s[i], t[j]);
                    flag = 1;
                }
            }
        }
        if(flag = 1){
             printf("No\n");
        }
    }
    return 0;
}
