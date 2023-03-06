/* TIMUS 1100 */
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

/*
    a solution for less than 64 number 
*/
typedef struct element{
    unsigned long long int M;
    element* next;
}element;

class  Final_Standings{
    private:
        unsigned int n;
        int *FrequentArray;
        element* element_Array;
        void Add_Element(unsigned long long int M_temp, unsigned int ID_temp){
            element *e, *ptr;
            ptr = &element_Array[ID_temp];
            if(FrequentArray[ID_temp] == 0){
                element_Array[ID_temp].M = M_temp;
                element_Array[ID_temp].next = NULL;
            }else{
                for(int i = 0; i < FrequentArray[ID_temp] - 1; i++){
                    ptr = ptr->next;
                }
                e = new element;
                e->M = M_temp;
                ptr->next = e;
            }
        }
    public:
        Final_Standings(){
            int M_temp, ID_temp;
            cin >> n;
            element_Array = new element[n];
            FrequentArray = new int[n];
            memset(FrequentArray, 0, n * sizeof(int));
            for(int i = 0; i < n; i++){
                cin >>  M_temp >> ID_temp;
                Add_Element(M_temp, ID_temp);
                FrequentArray[ID_temp]++;
            }
            Add_Element(M_temp, ID_temp);
        }
        void print(){
            element *ptr;
            cout << "------------------------" << endl;
            for(int i = n-1; i > 0; i--){
                ptr = &element_Array[i];
                for(int j = 0; j < FrequentArray[i]; j++){
                    cout << ptr->M << " " << i << endl;
                    ptr = ptr->next;
                }
            }
        }
        void display_element(element e){
            cout << e.M << endl;
        }
};

int main()
{
    Final_Standings p;
    p.print();
}
