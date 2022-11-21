#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class DataTypes{
    private:
        int i;
        long long int l;
        char ch;
        float f;
        double d;
    public:
        DataTypes(){
            std::cout << "No item is defined \n";
            std::cin >> i >> l >> ch >> f >> d;
        }
        DataTypes(const DataTypes &dt ){
            std::cout << "all the class items are defined \n";
            i = dt.i;
            l = dt.l;
            ch = dt.ch;
            f = dt.f;
            d = dt.d;
        }
        void print(){
            std::cout << i << "\n";
            std::cout << l << "\n";
            std::cout << ch << "\n";
            std::cout << f << "\n";
            std::cout << d << "\n";
        }
        ~DataTypes(){
            std::cout<< "We are done here" << endl;
        }
};

int main()
{
    DataTypes d;
    d.print();
}
