#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, res=0;
    string number;
    cin >> N;

    cin >> number;
    for(auto i: number){
        res += static_cast<int>(i - '0');
    }
    cout << res << "\n";
    return 0;
}