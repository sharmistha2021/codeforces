#include <iostream>

using namespace std;

int main()
{
    int no_frnd, height, count = 0;
    cin >> no_frnd >> height;
    for(int i = 0; i < no_frnd; i++){
        int frnd;
        cin >> frnd;
        if(frnd <= height)
            count++;
        else
            count += 2;
    }
    cout << count << endl;
    return 0;
}
