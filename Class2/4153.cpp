#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    

    while (true){
        vector <int> v;
        cin >> a >> b >> c;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());
        a = v[0];
        b = v[1];
        c = v[2];
        
        if (a == 0 && b == 0 && c == 0) break;
        
        if ((pow(a, 2) + pow(b, 2)) == pow(c, 2)) cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}