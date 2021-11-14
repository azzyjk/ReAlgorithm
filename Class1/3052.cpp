#include<iostream>
#include<map>

using namespace std;

map<int, int> m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tmp;

    for(int i=0; i<10; i++){
        cin >> tmp;
        m[tmp%42]++;
    }

    cout << m.size() << "\n";

    return 0;
}