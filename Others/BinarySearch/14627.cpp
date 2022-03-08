#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long S, C, L, tmp, min = 0, max = 0, mid, cnt, res = 0, allGreenOninon = 0;
    vector <long long> v;
    cin >> S >> C;

    while (S--){
        cin >> tmp;
        v.push_back(tmp);
        if (max < tmp) max = tmp;
        allGreenOninon += tmp;
    }

    while (min <= max){
        cnt = 0;
        mid = (min + max) / 2;

        if (mid == 0 && max == 1) mid = 1;
        if (mid == 0) break;

        for (auto i : v){
            cnt += i / mid;
        }

        if (cnt >= C){
            min = mid + 1;
            if (res < mid) res = mid;
        }
        else{
            max = mid - 1;
        }
    }

    cout << allGreenOninon - (res * C) << "\n";
    return 0;
}