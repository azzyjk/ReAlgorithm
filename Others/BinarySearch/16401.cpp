#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N, tmp, min = 0, max = 0, mid, res = 0;
    long long sum = 0;
    vector <int> v;
    cin >> M >> N;
    for (int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back(tmp);
        if (max < tmp) max = tmp;
    }
    
    sort(v.begin(), v.end());
    
    while (min <= max){
        sum = 0;
        mid = (min + max) / 2;
        if (mid == 0) break;
        for (auto i : v){
            sum += i / mid;
        }

        if (sum >= M){
            if (res < mid) res = mid;
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }
    cout << res << "\n";

    return 0;
}