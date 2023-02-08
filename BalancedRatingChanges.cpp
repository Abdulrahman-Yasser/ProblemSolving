class BalancedRatingChanges{
    pricate :
        int n;
        int *x;
    public:
        BalancedRatingChanges{
            cin >> n;
            x = new int[n];
            for(int i = 0; i < n; i++){
                cin >> x[i]
            }
        }
        void print(void){
            int carry = 0;
            for(int i = 0; i < n; i++){
                if(x[i] %2 == 0){
                    cout << x[i] / 2 << endl;
                }else{
                    if(carry){
                        cout << x[i] - 1;
                    }else{
                        cout << x[i] / 2;
                        carry = 1;
                    }
            }
        }
    }
};

int main(){
    BalancedRatingChanges p;
    p.print();
}