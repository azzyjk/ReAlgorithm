#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(int a, int b){
    return a>=b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, tmp, maxGrade = 0;
    double sum = 0.0;
    vector<double> v;

    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> tmp;
        if(maxGrade < tmp) maxGrade = tmp;
        v.push_back(tmp);
    }
    
    for(auto i : v){
        sum += i;
    }

    cout.precision(5);
    cout << sum / maxGrade * 100 / v.size() << "\n";
    
    return 0;
}