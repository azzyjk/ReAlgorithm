#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, tmp, sum, res;
    cin >> T;
    for (int i = 0; i< T; i++){
        cin >> N >> M;
        sum = 0;
        vector <int> v;
        
        while (N--){
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());

        while (M--){
            res = 0;
            cin >> tmp;
            
            int left = 0, right = v.size() - 1, mid;

            while (left <= right){
                mid = (left + right) / 2;
                if (v[mid] > tmp){
                    right = mid - 1;
                    if (res < v.size() - mid) res = v.size() - mid;
                }
                else {
                    left = mid + 1;
                }
            }
                sum += res;
        }
        
        cout << sum << "\n";
    }
    return 0;
}