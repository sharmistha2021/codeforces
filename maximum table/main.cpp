#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[11][11];
    for(int i = 0; i < 11; i++){
        arr[0][i] = 1;
    }
    for(int i = 1; i < 11; i++){
        arr[i][0] = 1;
        for(int j = 1; j < 11; j++){
            arr[i][j] = arr[i - 1][j] + arr[i] [j - 1];
        }
    }
    cin >> n;

    cout << arr[n -1][n - 1] << endl;
    return 0;
}
