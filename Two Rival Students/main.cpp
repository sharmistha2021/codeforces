#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int a, b, s1, s2;
        cin >> a >> b >> s1 >> s2;
        if(s1 > s2)
            swap(s2, s1);
        if(((s2 - s1) + 1 + b) >= a)
            printf("%d\n", a - 1);
        else if(b == 0)
            printf("%d\n", s2 - s1);
        else
            printf("%d\n", s2 - s1 + b);
    }

    return 0;
}
