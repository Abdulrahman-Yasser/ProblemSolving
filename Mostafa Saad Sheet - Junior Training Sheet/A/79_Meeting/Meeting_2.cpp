#include "Meeting_2.hpp"

int my_binary_search(pair<int, int> arr[],int size,int x)
{
	int start = 0;
	int end = size-1;
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(arr[mid].first==x)	
			return mid;
		else if(arr[mid].first<x)	
			start = mid + 1;
		else	
			end = mid - 1;
	}
	return -1;
}
Meeting_2::Meeting_2(){
    int temp = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> CirclesNum;
    Circles = new int[CirclesNum*3];
    for(int i = 0; i < CirclesNum*3; i++){
        cin >> Circles[i];
    }
    FillThePoints();
}
void Meeting_2::FillThePoints(void){
    int length = x2 - x1; // 4 - 2 = 2
    int height = y1 - y2; // 5 - 2 = 3
    int periphery = (length + height) * 2;
    Points = new pair<int, int>[periphery];
    /* top and bottom depends on the  length of the rectangle */
    for(int i = 0; i < length; i++){
        /* fill the top */
        Points[i].first = x1 + i;
        Points[i].second = y1;
        /* fill the bot */
        Points[periphery - i - 1].first = x2 - i;
        Points[periphery - i - 1].second = y2;
    }
    /* Fill the left and right */
    for(int i = 0; i < height; i++){
        /* fill the left */
        Points[i + length].first = x1;
        Points[i + length].second = y1-i-1;
        /* fill the right */
        Points[periphery - i - 1 - length].first = x2;
        Points[periphery - i - 1 - length].second = y2+i+1;
    }
    /* Sorting the array */
    sort(Points, Points+periphery, [](const pair<int,int> &pair1, 
                          const pair<int,int> &pair2){
                            int result = 0;
                            if( (pair2.first > pair1.first) || 
                                ((pair2.first == pair1.first) &&
                                (pair2.second > pair1.second)) )
                            {
                                result = 1;
                            } 
                            return result;
                        });
}
void Meeting_2::print(void) const{
    int periphery = ((x2 - x1) + (y1 - y2)) * 2;
    for(int i = 0; i < periphery; i++){
        cout << "(" << Points[i].first << "," << Points[i].second << ")" << " - ";
    }
}

void Meeting_2::Sloution(void) const{
    int periphery = ((x2 - x1) + (y1 - y2)) * 2;
    int index = 0;
    for(int i = 0; i < CirclesNum; i++){
        index = my_binary_search(Points, periphery, Circles[i*3]);
        cout << endl;
        cout << "(" << Points[index].first << "," << Points[index].second << ")" << " - ";
    }
}

int main(){
    Meeting_2 p;
    p.print();
    p.Sloution();
}