#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 0)
            continue;
        else
        {
             flag = 1;
             break;
        }
    }
    if(flag == 0)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
    return 0;
}
