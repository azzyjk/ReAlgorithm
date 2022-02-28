#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, N, tmp;
    long long min = 0, max = 0, mid, res = 0, sum;
    vector <int> v;
    cin >> K >> N;

    while (K--){
        cin >> tmp;
        v.push_back(tmp);
        if (max < tmp) max = tmp;
    }

    while (min <= max){
        sum = 0;
        mid = (min + max) / 2;

        if (mid == 0){
            if (res < 1) res = 1;
            break;
        }

        for (auto i : v){
            sum += i / mid;
        }

        if (sum >= N){
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