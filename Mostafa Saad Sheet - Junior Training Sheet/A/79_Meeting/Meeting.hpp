#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Point{
    private:
        int x, y;
        static int size;
        Point* next;
        static Point *LastElementPtr;
    public:
        Point() = default;
        Point(int x1, int y1);
        void add_element(int x1, int y1);
        int get_x(void) const;
        int get_y(void) const;
        void print (void)const;
};

class MeetingRectangle{
    private:
        Point p1, p2;
        int size, Longest_Line;
        Point* my_points;
    public:
        MeetingRectangle(Point &&p_1, Point &&p_2);
        void display(void) const;
        Point getNearestPoint(Point &p) const;
        Point* getMyPoints(void) const;
};
       

class MeetingCircle{
    private :
        Point p;
        int d;
    public:
        MeetingCircle(Point &&p1, int d);
};


class Meeting{
    private :
        int x1, x2, y1, y2;
        int* ptr;
        int length;
        pair<int, int> get_nearest_point (pair<int, int> point) const;
    public:
        Meeting();
        void print(void) const;
    };


int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2 ;
    Point p1(x1, y1), p2(x2, y2);
    MeetingRectangle rect(p1, p2);

}
