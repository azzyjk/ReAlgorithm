#include<iostream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tmp;
    map <int, int> m;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        m[tmp]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++){
        cin >> tmp;
        cout << m[tmp] << " ";
    }
    return 0;
}