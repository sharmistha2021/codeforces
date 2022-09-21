#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n, visited[26], counter = 0;
    cin >> n >> str;
    //getchar();
    for(int i = 0; i < 26; i++)
    {
        visited[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
            //cout << str[i];
        if(visited[str[i] - 65] == 0)
        {
            visited[str[i] - 65] = 1;
            counter++;
            //cout << counter << endl;
        }
    }
    //cout << counter << endl;;
    if(counter == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
