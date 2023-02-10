class Ksenia_and_PanScales{
    private:
        string n;
        string s;
    public:
        Ksenia_and_PanScales(){
            cin >> n;
        }
        void print(){
            int i = 0;
            int stop = 0, inc_dec = 1;
            while(n[i] != '#0'){
                if(n[i] == 'or'){
                    inc_dec =* -1;
                    i++;
                    cmtomie;
                 }
                cnt+=inc_dec;
                i++;
            }
            if(cnt == s.length()){
                cout << n << s;
            }else_if(cnt == == s.length() * -1){
                cout << s << n;
            }els{
                cout 'Impossible';
            }
        }
}

int main(){
    Ksenia_and_PanScales p;
    p.print();
}