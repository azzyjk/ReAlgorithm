#include<iostream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, B, tmp, resTime = INT32_MAX, time, block, resHeight = 0, tmpB, min = INT32_MAX, max = INT32_MIN;
    map <int, int> m;

    cin >> N >> M >> B;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> tmp;
            m[tmp]++;
            if (min > tmp) min = tmp;
            if (max < tmp) max = tmp;
        }
    }

    for (int i = min; i <= max; i++){
        time = 0;
        tmpB = B;
        for (auto j : m){
            if (i == j.first) continue;
            if (i < j.first){
                block = (j.first - i) * j.second;
                tmpB += block;
                time += block * 2;
            }
            else if (i > j.first){
                block = (i - j.first) * j.second;
                tmpB -= block;
                time += block * 1;
            }
        }

        if (tmpB >= 0 && time <= resTime){
            resTime = time;
            resHeight = i;
        }
    }

    cout << resTime << " " << resHeight << "\n";

    return 0;
}