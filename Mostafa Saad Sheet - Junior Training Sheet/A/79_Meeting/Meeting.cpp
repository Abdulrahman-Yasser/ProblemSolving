#include "Meeting.hpp"

int Point::size = 0;
Point* Point::LastElementPtr = nullptr;

Point::Point(int x1, int y1):
x(x1), y(y1){
    this->next = nullptr;
}


int Point::get_x(void) const{
    return x;
}
int Point::get_y(void) const{
    return y;
}
void Point::add_element(int x1, int y1){
    if(LastElementPtr == nullptr){
        this->x = x1;
        this->y = y1;
        this->next = new Point;
        this->LastElementPtr = this->next;
    }else{
        LastElementPtr->x = x1;
        LastElementPtr->y = y1;
        LastElementPtr->next = new Point;
        LastElementPtr = LastElementPtr->next;
    }
    this->size++;
}


void Point::print(void) const{
    const Point* ptr;
    ptr = this;
    while(ptr->next != nullptr){
        cout << "(" << ptr->get_x() << "," << ptr->get_y() << ") - ";
        ptr = ptr->next;
    }
}


MeetingRectangle::MeetingRectangle(Point &&p_1, Point &&p_2):
p1(p_1), p2(p_2)
{
    size = abs(p_1.get_x() - p2.get_x()) + 1;
    my_points = new Point[size];
    Longest_Line = p1.get_y() - p2.get_y();
    for(int i = 0; i < Longest_Line; i++){
        my_points[0].add_element(p1.get_x(), p1.get_y()-i);
    }
    for(int i = 0; i < Longest_Line; i++){
        my_points[size-1].add_element(p2.get_x(), p2.get_y()+i);
    }
    for(int i = 1; i < size-1; i++){
        my_points[i].add_element(p1.get_x() + 1, p1.get_y());
        my_points[i].add_element(p2.get_x() - 1, p2.get_y());
    }
}

void MeetingRectangle::display(void) const{
    for(int i = 0; i < size; i++){
        my_points[i].print();
    }
}

Point MeetingRectangle::getNearestPoint (Point &p) const{
    Point* my_nearest_line;
}

MeetingCircle::MeetingCircle(Point &&p1, int d){
    this->p = p1;
    this->d = d;
}


Meeting::Meeting()
{
    cin >> x1 >> y1 >> x2 >> y2;
    int temp;
    cin >> temp;
    ptr = new int[3*temp];
    length = temp*3;
}

void Meeting::print (void) const
{
    for(int i = 0; i < length; i+=3){
        // get_nearest_point();
    }
}

pair<int, int> Meeting::get_nearest_point(pair<int, int> point) const{
    pair<int, int> result;

}
