class Polo_the_Penguin_and_Segments{
    private:
        int n, k, min = 100000, max = -100000;
    public:
        Polo_the_Penguin_and_Segments(){
            int i = 0, temp;
            cin >> n;
            cin >> k;
            for(i = 0; i < n; i++){
                cin >> temp;
                if(min > temp){
                    min = temp;
                }
                if(max < temp){
                    max = temp;
                }
            }
        }
        void print(){
            cout << (max - min) % k;
        }
}

int main(){
    Polo_the_Penguin_and_Segments p;
    p.print();
}