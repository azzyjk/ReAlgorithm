#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

bool compare(int num1, int num2){
    return num1 < num2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map <int, int, greater<int> > m;
    int N, tmp;    
    cin >> N;
    
    for (int i = 0; i < N; i++){
        cin >> tmp;
        if (tmp == 0 && m.size() != 0){
            cout << (*m.begin()).first << "\n";
            (*m.begin()).second--;
            if ((*m.begin()).second == 0) m.erase(m.begin());
        }
        else if(tmp == 0 && m.size() == 0) cout << "0\n";
        else{
            m[tmp]++;
        }
    }
    return 0;
}