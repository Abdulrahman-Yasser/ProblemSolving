class IQ_Test{
    pricate :
        string s[4];
    public:
        IQ_Test{
            cin >> s[0];
            cin >> s[1];
            cin >> s[2];
            cin >> s[3];
        }
        void print(void){
            int i, j, FirstSwap = 0;
            for(i = 0; i < 4; i++){
                prev = s[i][0];
                for(j = 1; j < 4; j++){
                        if(s[i][j] != prev){
                            if(FirstSwap == 1){
                                cout << NO;
                                return;
                            }
                            FirstSwap = 1;
                        }
                        prev = s[i][j];
                    }
                }
            }
            if(FirstSwap == 0){
                cout NO;
                return;
            }
            cout << YES;
        }
    };

int main(){
    IQ_Test p;
    p.print();
}