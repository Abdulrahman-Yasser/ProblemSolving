/* Vika and Squares - CF610-D2-B */


#include "main.hpp"

void problem::Solving(void){
    int mymin, index;
    vector<int> positions;

    mymin = min_element(a, a+n) - a;

    for(int i = mymin; i < n; i++){
        mymin = min_element(a+i, a+n) - a;
        if(a[i] == a[mymin]){
            positions.push_back(i);
            i = mymin;
        }
    }

    cout << positions.;
}

problem::problem(){
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}


int main(){
    problem p;
    p.Solving();
}