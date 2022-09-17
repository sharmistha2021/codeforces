#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j = 1; j <= t; j++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int one = 0, two = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                one++;
            }
            else{
                two++;
            }
        }
        //printf("%d %d\n", one, two);
        if(n%2 == 0){
            if(one%2 == 0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else if(n%2 != 0){
            if(one == 0 || two == 0){
                printf("NO\n");
               // break;
            }
             else if(one%2 == 0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }

        }


    }
    return 0;
}
