#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, tmp, max = INT32_MIN, min = INT32_MAX;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> tmp;
        if(max < tmp) max = tmp;
        if(min > tmp) min = tmp;
    }
    cout << min << " " << max << "\n";

    return 0;
}