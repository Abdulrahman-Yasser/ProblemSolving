// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Brother{
    private:
        char FirstName_1[20];
        char SecondName_1[20];
        char FirstName_2[20];
        char SecondName_2[20];

    public:
        Brother(){
            std::cout << "Class Defined without and arguments, so please enter the names\n";
            cin >> FirstName_1 >> SecondName_1;
            cin >> FirstName_2 >> SecondName_2;
        }
        Brother(char a[], char b[], char c[], char d[]){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            strcpy(FirstName_1, a);
            strcpy(SecondName_1, b);
            strcpy(FirstName_2, c);
            strcpy(SecondName_2, d);
        }
        Brother(char a[], char b[]){
            char c[20], d[20], j, i, index;
            strcpy(FirstName_1, a);
            strcpy(FirstName_2, b);
            for(i = 0, j = 0; a[i] != '\0' ; i++){
                if(a[i] == ' '){
                    index = i;
                    /*to skip the space and don't save it in the second name*/
                    i++;
                    while(a[i] != '\0'){
                        c[j++] = a[i++];
                    }
                    c[j] = '\0';
                    FirstName_1[index] = '\0';
                    break;
                }
            }
            for(i = 0, j = 0; b[i] != '\0'; i++){
                if(b[i] == ' '){
                    /*to skip the space and don't save it in the second name*/
                    index = i;
                    i++;
                    while(b[i] != '\0'){
                        d[j++] = b[i++];
                    }
                    d[j] = '\0';
                    FirstName_2[index] = '\0';
                    break;
                }
            }
            strcpy(SecondName_1, c);
            strcpy(SecondName_2, d);
            cout << "we saved the first person name : " << FirstName_1 << " " << SecondName_1 << endl;
            cout << "we saved the second person name : " << FirstName_2 << " " << SecondName_2 << endl;
        }
        void print(){
            char i = 0, j, z;
            for(i = 0; j != '\0' && z != '\0' ; i++){
                j = SecondName_1[i];
                z = SecondName_2[i];
                if(j != z){
                    cout << "\nNot Brothers\nFirst person : " <<FirstName_1 << " " << SecondName_1 <<"\nSecond person : "<< FirstName_2 << " " << SecondName_2 ;
                    return;
                }
            }
            cout << "\nARE Brothers\nFirst person : " << FirstName_1 << " "  << SecondName_1 <<"\nSecond person : "<< FirstName_2 << " " << SecondName_2 ;
        }
};

int main()
{
    Brother p1;
    Brother p2("Khaled Kareem", "Mohamed Kareem");
    p1.print();
    p2.print();
}
