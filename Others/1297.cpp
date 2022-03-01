#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double D, H, W, line, multi;
    cin >> D >> H >> W;

    line = pow(H, 2) + pow(W, 2);

    multi = D / sqrt(line);

    H = floor(H * multi);
    W = floor(W * multi);
    
    cout << H << " " << W << "\n";
    return 0;
}