#include<iostream>
#include<cmath>
#define SIZE 5

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tmp, res=0;

    for(int i=0; i<SIZE; i++){
        cin >> tmp;
        res += pow(tmp, 2);
    }
    
    cout << res % 10 << "\n";
    return 0;
}