#include <bits/stdc++.h>

using namespace std;
//1365/B
bool distinct(int n)
{
    int size = 0, i = 0, arr[10];
    while(n != 0)
    {
        size++;
        arr[i] = n%10;
        n = n/10;
        i++;
    }
    for(int j = 0; j < size - 1; j++)
    {
        int x = arr[j];
        for(int k = j + 1; k < size; k++ )
        {
            if(x == arr[k])
            {
                return false;
            }
        }
    }
    return true;

}
int main()
{
    int l, r, flag = 0;
    cin >> l >> r;
    for(; l <= r; l++)
    {
        if(distinct(l))
        {
            flag = 1;
            break;
        }

    }
    if(flag == 1){
        cout << l << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}
