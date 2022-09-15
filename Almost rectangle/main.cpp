#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                cin >> arr[i][j];
            }
        }
        flag = 0;
        int x1, y1, x2, y2
         for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                 if(arr[i][j] == '*'){
                    if(flag ==0)
                    {
                        x1 = i;
                        y1 = j;
                        flag = 1;
                    }
                    else{
                        x2 = i;
                        y2 = j
                    }
                 }
            }
        }
        arr[x2-x1][y1] == '*'
        arr[x1][y2 + y1] == '*'

    }
    cout << "Hello world!" << endl;
    return 0;
}
