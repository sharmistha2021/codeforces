#include <bits/stdc++.h>

using namespace std;

int no_zero(int n){
    int num, fina = 0, i = 1;
    while(n){
        num = n % 10;
        if(num){
            fina += num*i;
            i *= 10;
        }
        n /= 10;
    }
    return fina;
}

int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    if(no_zero(b) + no_zero(a) == no_zero(c)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
