#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, H;
        int a, b = 0, c = 0;
        scanf("%d%d", &n, &H);
       // vector <int> v;
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            if(a > b){
                b = a;
            }
            else if(a > c){
                c = a;
            }
            //v.push_back(a);
        }

        int f, s = 0;
        if(b > c){
            f = b;
        }
        else{
            f = c;
        }
        while(H > 0){
            H = H - f;
        if(f == c){
            f = b;
        }
        else{
            f = c;
        }
            s++;
        }
        printf("%d\n", s);
    }
    return 0;
}
