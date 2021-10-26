#include<iostream>
#define TOTAL 8

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool asc = true, desc = true;
    int before, now;

    for(int i=0; i<TOTAL; i++){
        if(i==0){
            cin >> before;
            continue;
        } 
        else cin >> now;
        if(now > before) desc = false;
        if(now < before) asc = false;
        before = now;
    }

    if(asc) cout << "ascending\n";
    else if(desc) cout << "descending\n";
    else cout << "mixed\n";
    return 0;
}