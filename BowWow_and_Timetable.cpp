class BowWow_and_Timetable{
    pricate :
    /* it might be a bool, give  it a try */
        string s[100];
    public:
        BowWow_and_Timetable{
            cin >> s;
        }
        void print(void){
            int i = 0, inc_1 = 0;
            while(i < 100){
                i++;
                if(s[i] =='1'){
                    inc_1++;
                    cnt = i;
                }
            }
        if(inc_1 > 1){
            cout << (cnt/2) + 1;
        }else{
            cout << cnt / 2;
        }
    }
};

int main(){
    BowWow_and_Timetable p;
    p.print();
}