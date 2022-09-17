#include <iostream>

using namespace std;

int main()
{
    int n, arr[6] = {1, 2, 3, 4, 5}, counter = 0;
    cin >> n;
    for(int i = 5; i > 0; i--){
        while(n >= i){
            counter ++;
            n = n - i;
        }
    }
    cout << counter << endl;
    return 0;
}
