#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int num1, int num2){
    return num1 > num2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, tmp, res = 0;
    vector <int> v;
    cin >> N >> K;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), compare);

    for (auto i : v){
        while (K >= i){
            K -= i;
            res += 1;
            if (K == 0) break;
        }
    }

    cout << res << "\n";
    return 0;
}