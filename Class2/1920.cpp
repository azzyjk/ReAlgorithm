#include<iostream>
#include<set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tmp;
    set <int> s;
    cin >> N;

    int NArr[N];
    
    for (int i = 0; i < N; i++){
        cin >> tmp;
        s.insert(tmp);
    }

    cin >> M;

    for (int i = 0; i < M; i++){
        cin >> tmp;
        if (s.find(tmp) != s.end()) cout << "1\n";
        else cout << "0\n";
    }

    return 0;
}