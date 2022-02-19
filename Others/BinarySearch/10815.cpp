#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tmp, high = 0;
    vector <int> v;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back(tmp);
        if (high < tmp) high = tmp;
    }
    
    sort(v.begin(), v.end());

    cin >> M;
    for (int i = 0; i < M; i++){
        cin >> tmp;
        int min = 0, max = v.size() - 1, mid;
        bool isHave = false;
        while (min <= max){
            mid = (min + max) / 2;
            if (v[mid] == tmp){
                isHave = true;
                break;
            }
            if (v[mid] > tmp){
                max = mid - 1;
            }
            else{
                min = mid + 1;
            }
        }
        
        if (isHave){
            cout << "1 ";
        }
        else{
            cout << "0 ";
        }
    }
    return 0;
}