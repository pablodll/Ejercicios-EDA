#include <iostream>
using namespace std;

const int MAX = 1000000;

int cambiarBombin(int v[], int n)/* return ret */{
    int m;
    
    int i = 0;
    while(i < n){
        m += v[i];
        i++;
    }
    if(m == 0) return 0;
    else return 1;
}

int main(){
    int n, v[MAX];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    while(n != 0){
        cout << cambiarBombin(v, n) << '\n';
        cin >> n;
    }

    return 0;
}