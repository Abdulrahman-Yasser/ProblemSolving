// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class SortNumbers{
    private:
        int a[3];
        int a_sorted[3];

    public:
        SortNumbers(){
            for(int i = 0; i < 3; i++){
                std::cout << "Class Defined without and arguments, Please enter it's value for index : " << i << endl;
                cin >> a[i];
                while(a[i] < -1000000 || a[i] > 1000000){
                    std::cout << "Make sure the range is between -1000000 : 1000000\n";
                    cin >> a[i];
                }
                a_sorted[i] = a[i];
            }
        }
        SortNumbers(int b[3]){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            for(int i = 0; i < 3; i++){
                a[i] = b[i];
                while(a[i] < -1000000 || a[i] > 1000000){
                    std::cout << "Make sure the range is between -1000000 : 1000000, enter the index " << i << " Because it's value is " << a[i] << endl;
                    cin >> a[i];
                }
                a_sorted[i] = a[i];
            }
        }
        void Bubblesort(void){
            int t, i, j;
            for(i = 0; i < 3; i++){
                for(j = i+1; j < 3; j++){
                    if(a_sorted[i] > a_sorted[j]){
                        t = a_sorted[i];
                        a_sorted[i] = a_sorted[j];
                        a_sorted[j] = t;
                    }
                }
            }
        }
        void print_original(){
            for(int i = 0; i < 3; i++){
                cout << a[i] << endl;
            }
        }
        void print_Sorted(){
            for(int i = 0; i < 3; i++){
                cout << a_sorted[i] << endl;
            }
        }
};

int main()
{
    SortNumbers p;
    p.Bubblesort();
    p.print_Sorted();
    cout << endl;
    p.print_original();
}
