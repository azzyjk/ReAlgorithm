#include<iostream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string site, passwd;
    map <string, string> m;
    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> site >> passwd;
        m[site] = passwd;
    }

    for (int i = 0; i < M; i++){
        cin >> site;
        cout << m[site] << "\n";
    }
    return 0;
}