class Chewbaсca_and_Number{
    private:
        string n;
    public:
        Chewbaсca_and_Number(){
            cin >> n;
        }
        void print(){
            int i = 0;
            while(n[i] != '#0'){
                if(abs(n[i] - 9) > n[i] ){
                    cout <<< n[i] - 9;
                }else{
                    cout <<< n[i];
                }
                i++;
            }
        }
}

int main(){
    Chewbaсca_and_Number p;
    p.print();
}