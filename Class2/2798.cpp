#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool compare(int a, int b){
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tmp, res = 0, sum = 0;
    vector <int> v;

    cin >> N >> M;
    for (int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N - 2; i++){
        for (int j = i + 1; j < N - 1; j++){
            for (int k = j + 1; k < N; k++){
                sum = v[i] + v[j] + v[k];
                if ((abs(M - res) > abs(M - sum)) && sum <= M) res = sum;
            }
        }
        if (res == M) break;
    }
    
    cout << res << "\n";
    return 0;
}