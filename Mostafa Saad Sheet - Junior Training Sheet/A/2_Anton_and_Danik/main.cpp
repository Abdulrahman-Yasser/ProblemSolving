
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Anton_and_Danik{
    private:
        int num;
        char* Ptr;
        int Dank = 0, Ant = 0;
    public:
        Anton_and_Danik(){
            int i;
            cin >> num;
            Ptr = (char*)malloc(sizeof(char)*num);
            for(i = 0; i < num; i++){
                cin >> Ptr[i];
                if(Ptr[i] == 'D'){
                    Dank++;
                }else if(Ptr[i] == 'A'){
                    Ant++;
                }
            }
        }
        void print(){
            if(Dank > Ant){
                cout << "Danik";
            }else if(Dank < Ant){
                cout << "Anton";
            }else{
                cout << "Friendship";
            }
        }
};

int main()
{
    Anton_and_Danik p;
    p.print();
}
