#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B ,V, res;
    cin >> A >> B >> V;

    V -= A;

    res = ceil(V / (double)(A - B));
    
    cout << res + 1 << "\n";
    return 0;
}