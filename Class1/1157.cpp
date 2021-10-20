#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    int cnt = 0;
    pair<char, int> res = make_pair(' ', 0);
    map<char, int> m;

    cin >> str;
    for (auto i : str){
        if(i >= 'a' && i <= 'z') m[i-('a' - 'A')]++;
        else m[i]++;
    } 

    for (auto i : m) {
        if (i.second > res.second){
            cnt = 0;
            res.first = i.first;
            res.second = i.second;
        }
        else if (i.second == res.second) cnt++;
    }
    if (cnt > 0) cout << "?\n";    
    else cout << res.first << "\n";

    return 0;
}