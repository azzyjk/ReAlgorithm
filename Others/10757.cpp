#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, res = 0;

    for (int i = 0; i < 5; i++){
        cin >> num;
        if (num < 40) num = 40;
        res += num;
    }

    cout << res / 5 << "\n";    
    return 0;
}