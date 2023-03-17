#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Meeting_2{
    private :
        int x1, y1, x2, y2, CirclesNum;
        int *Circles;
        pair <int, int> *Points;
        pair <int, int> *Points_y;
        void FillThePoints(void);
    public:
        Meeting_2();
        void print(void) const;
        void Sloution(void) const;
};
