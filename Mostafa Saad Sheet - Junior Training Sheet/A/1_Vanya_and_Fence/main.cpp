
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Vanya_and_Fence{
    private:
        int num, height;
        int* Ptr;
    public:
        Vanya_and_Fence(){
            int i;
            cin >> num >> height;
            Ptr = (int*)malloc(sizeof(int)*num);
            for(i = 0; i < num; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int i, sum = 0;
            for(i = 0; i < num; i++){
                sum = sum + ( (Ptr[i] - 1) / height) + 1;
            }
            cout << sum;
        }
};

int main()
{
    Vanya_and_Fence p;
    p.print();
}
