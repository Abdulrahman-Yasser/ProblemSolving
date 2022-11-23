#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class NextAlphabet{
    private:
        char ch;

    public:
        NextAlphabet(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            cin >> ch;
        }
        NextAlphabet(char input_1){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            ch = input_1;
        }
        void print(){
            if(ch != 'z' && ch != 'Z' ){
                cout << ++ch;
            }else if(ch == 'Z'){
                ch = 'A';
                cout << ch;
            }else{
                ch = 'a';
                cout << ch;
            }
        }
};

int main()
{
    NextAlphabet p;
    p.print();
}
