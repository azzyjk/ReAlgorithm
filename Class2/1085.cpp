#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, w, h, res = INT32_MAX;

    cin >> x >> y >> w >> h;

    if (abs(x-0) < res) res = abs(x-0);
    if (abs(y-0) < res) res = abs(y-0);
    if (abs(x-w) < res) res = abs(x-w);
    if (abs(y-h) < res) res = abs(y-h);
    cout << res << "\n";
    return 0;
}