class SnowFootprint{
    pricate :
        int n;
        int *x;
    public:
        SnowFootprint{
            int i = 0
            cin >> n;
            x = new int[n];
            for(i = 0; i < n; i++){
                cin >> x[i];
            }
        }
        void print(void){
            int i, temp, FirstSwap = 0;
            i = x[0];
            for(i = 1; i < n; i++){
                if(abs(prev - x[i]) != 1){
                    if(FirstSwap > 0){
                        cout << NO;
                        return;
                    }
                    FirstSwap = 1;
                    temp = x[i];
                    x[i] = x[i+1];
                    x[i+1] = temp;
                    i--;
                }
            }
            cout << YES;
        }
    };

int main(){
    SnowFootprint p;
    p.print();
}