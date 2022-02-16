#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int num1, int num2){
    return num1 < num2;
}

int find(vector <int>& v, int findNum){
    int start = 0, end = v.size() - 1, mid;
    
    while (start <= end){
        mid = (start + end) / 2;
        if (v.at(mid) == findNum) return 1;
        else{
            if (v.at(mid) < findNum) start = mid + 1;
            else end = mid - 1;
        }
    }
    return 0;
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, tmp;

    cin >> T;
    for (int i = 0; i < T; i++){
        vector <int> v;
        cin >> N;
        for (int j = 0; j < N; j++){
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end(), compare);

        cin >> M;
        for (int j = 0; j < M; j++){
            cin >> tmp;
            cout << find(v, tmp) << "\n";
        }
    }
   
    return 0;
}