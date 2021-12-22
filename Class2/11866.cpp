#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, outNumber = 0;
    bool arr[1010] = {false, };
    vector <int> v;
    cin >> N >> K;
    
    for (int i = 0; i< N; i++){
        for (int j = 0; j < K; j++){
            outNumber++;
            if (outNumber > N) outNumber -= N;
            while (arr[outNumber]){
                outNumber++;
                if (outNumber > N) outNumber -= N;
            }   
        }
        arr[outNumber] = true;
        v.push_back(outNumber);
    }

    cout << "<";
    for (int i = 0; i < v.size(); i++){
        if (i == v.size()-1) cout << v[i];
        else cout << v[i] << ", ";
    }
    cout << ">\n";
    return 0;
}