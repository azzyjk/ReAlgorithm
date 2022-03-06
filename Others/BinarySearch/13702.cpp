#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    long long min = 0, max = 0, mid, sum, res = 0, tmp;
    vector <long long> v;
    cin >> N >> K;

    while (N--){
        cin >> tmp;
        v.push_back(tmp);
        if (max < tmp) max = tmp;
    }

    while (min <= max){
        sum = 0;
        mid = (min + max) / 2;

        if (max == 1 && mid == 0) mid = 1;
        if (mid == 0) break;

        for (auto i : v){
            sum += i / mid;
        }
        
        if (sum >= K){
            min = mid + 1;
            if (res < mid) res = mid;
        }
        else{
            max = mid - 1;
        }
    }
    cout << res << "\n";
    return 0;
}