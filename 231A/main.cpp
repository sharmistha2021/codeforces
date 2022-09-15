#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, q = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int sum = 0;
        cin >> a >> b >> c;
        sum += a + b + c;
        if(sum > 1)
            q += 1;
    }

    cout << q << endl;
    return 0;
}
