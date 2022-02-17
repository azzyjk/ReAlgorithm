#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, tmp, maxMoney, min = 0, max = 0, mid = 0, sum = 0, res = 0;
    vector <int> v;
    cin >> N;    
    
    for (int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back(tmp);
        if (max < tmp) max = tmp;
    }
    cin >> maxMoney;

    while (min <= max){
        sum = 0;
        mid = (min + max) / 2;
        for (int i = 0; i < N; i++){
            if (v.at(i) > mid){
                sum += mid;
            } 
            else{
                sum += v.at(i);
            }
        }
        
        if (sum > maxMoney){
            
            max = mid - 1;
        } 
        else{
            res = mid;
            min = mid + 1;
        } 
    }

    cout << res << "\n";

    return 0;
}