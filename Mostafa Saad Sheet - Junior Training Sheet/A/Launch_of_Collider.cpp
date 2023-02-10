class Launch_of_Collider{
    private:
        int n;
        char* ptr_c;
        int* ptr_i;
    public:
        Launch_of_Collider(){
            int i = 0;
            cin >> n;
            ptr_i = new int[n];
            ptr_c = new char[n];
            for(i = 0; i < n; i++){
                cin >> ptr_i[i];
            }
            for(i = 0; i < n; i++){
                cin >> ptr_c[i];
            }
        }
        void print(int j = 0, char c = 'n'){
            static min = 1000, i = -1, flag = 0;;
            if(c == 'R'){
                i++;
                /* be ready for the 'L' */
                flag = 1;
            }else if(c == 'L'){
                if(flag == 1){
                    if(min > ptr_i[i] - ptr_i[i-1]){
                        min = ptr_i[i] - ptr_i[i-1];
                    }
                }
            }
            i++;
            print(ptr_i[i], ptr_c[i]);
        }
};

int main(){
    Launch_of_Collider p;
    p.print();
}