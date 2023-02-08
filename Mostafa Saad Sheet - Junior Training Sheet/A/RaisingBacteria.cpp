class RaisingBacteria{
    pricate :
    /* it might be a bool, give  it a try */
        long long int n;
    public:
        RaisingBacteria{
            cin >> n;
        }
        void print(void){
            long long int i = n, cnt = 0;
            while(i > 1){
                i >> 1;
                cnt++;
            }
            i = n - pow(2, cnt);
            cout << i + 1;
        }
    };

int main(){
    RaisingBacteria p;
    p.print();
}