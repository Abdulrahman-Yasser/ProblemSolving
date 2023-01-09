#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class AliBaba{
    private:
        long long int a = 0;
    public:
        AliBaba(int input_1 = 0){
            a = input_1;
            while(false){
                cin >> a;
            }
        }
        AliBaba operator+(AliBaba b){
            AliBaba c;
            c.a = this->a + b.a;
            return c;
        }
        AliBaba operator-(AliBaba b){
            AliBaba c;
            c.a = this->a - b.a;
            return c;
        }
        AliBaba operator*(AliBaba b){
            AliBaba c;
            c.a = this->a * b.a;
            return c;
        }
        bool operator==(AliBaba b){
            return (b.a == this->a);
        }
        void print(){
            cout << a;
        }
};

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    AliBaba p1(a), p2(b), p3(c);
    AliBaba p4(d);
    if(p1+p2*p3==p4 || p4==p1+p2-p3 || p4==p1+p2+p3 || p4==p1-p2*p3 || p4==p1-p2-p3 || p4==p1-p2+p3 ||  
       p4==p1*p2*p3 || p4==p1*p2-p3 || p4==p1*p2+p3 ){
        cout << "YES";
       }else{
        cout << "NO";
       }
}
