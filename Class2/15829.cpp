#include<iostream>
#define M 1234567891

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long L, r = 1, res = 0, charNum = 0;
    string str;

    cin >> L;
    cin >> str;

    for (auto i : str){
        charNum = i - 'a' + 1;
        res = (res + (charNum * r) % M) % M;
        r = (r * 31) % M;
    }
    cout << res << "\n";
    return 0;
}