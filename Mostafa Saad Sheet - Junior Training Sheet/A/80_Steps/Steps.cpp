#include "Steps.hpp"

Steps::Steps(){
    pair <int, int> temp;
    cin >> l >> h;
    cin >> Initial_pos.first >> Initial_pos.second;
    cin >> cnt;
    vec.resize(std::size_t (sizeof(pair<int,int>)*cnt));
    for(int i = 0; i < cnt; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    cout << l << " " << h << endl;
    cout << Initial_pos.first << " " << Initial_pos.second << endl;
    cout << cnt << endl;
    for(int i = 0; i < cnt; i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }
}
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}
int max(int a, int b){
    if(a < b){
        return b;
    }else{
        return a;
    }
}
void Steps::Solution(void) const{
    int m, temp1, temp2, steps = 0;
    for(int i = 0; i < cnt; i++){
    }
}


int main(){
    Steps p;
}