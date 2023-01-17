
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Wire_with_Birds{
    private :
        int total_wires_num;
        int *wire_and_bird;
    public:
        Wire_with_Birds(){
            cin >> total_wires_num;
            wire_and_bird = (int*)malloc(sizeof(int) * total_wires_num * 2);
            for(int i = 0; i < total_wires_num; i++){
                /* wire id */
                wire_and_bird[i*2] = i;
                /* birds on that wier */
                cin >> wire_and_bird[i*2+1];
            }
        }

        void I_Just_Killed_a_bird(int wire_id, int birds_id){
            wire_id = wire_id - 1;
            int temp = wire_and_bird[wire_id*2 + 1];
            /* the birds on the wire will be either on the highest wire or the lower wire*/
            wire_and_bird[wire_id*2 + 1] = 0;

            /* RightSide Birds going to the lower wire */
            if(wire_id < total_wires_num){
                wire_and_bird[(wire_id+1)*2 + 1] += temp - birds_id;
            }

            /* LeftSide Birds going to the higher wire */
            if(wire_id > 0){
                wire_and_bird[(wire_id-1)*2 + 1] += birds_id - 1;
            }
        }
        void Display(){
            for(int i = 0; i < total_wires_num; i++){
                /* birds on that wier */
                cout << wire_and_bird[i*2+1] << endl;
            }
        }

};

class Shaass_and_Oskols : public Wire_with_Birds{
    private:
        int bullet_num;
        int* diedBird;
        int* diedBird_WireNum;
    public:
        Shaass_and_Oskols(){
            cin >> bullet_num;
            diedBird = (int*)malloc(sizeof(int)*bullet_num);
            diedBird_WireNum = (int*)malloc(sizeof(int)*bullet_num);
            for(int i = 0; i < bullet_num; i++){
                cin >> diedBird_WireNum[i];
                cin >> diedBird[i];
            }
        }
        void print(){
            int Wired_Being_Shot;
            for(int i = 0; i < bullet_num; i++){
                I_Just_Killed_a_bird(diedBird_WireNum[i], diedBird[i]);
            }
            Display();
        }

};

int main()
{
    Shaass_and_Oskols p;
    p.print();
}
