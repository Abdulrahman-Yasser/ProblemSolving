// https://www.spoj.com/problems/PIE/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
using namespace std;

double circle_area(double r) {
	const double PI = acos(-1.0);
	return PI * r * r;
}

int people_can_eat(vector<double> &area, double value){
	int can_eat = 0;
	for(int i = 0; i < area.size(); i++){
		can_eat += (int)(area[i] / value);
	}
	return can_eat;
}


double largest_area(vector<double> &pie_radius, int people) {
	// ToDo fill this function;
   	vector<double> areas(pie_radius.size());
	double end = 0;
	for (auto i = pie_radius.begin(); i != pie_radius.end(); ++i){
       		areas.push_back( circle_area(*i) );
		end = max(end, circle_area(*i));
	}
	double start = 0, mid = 0, sol = 0;
	while(start <= end){
		mid = (start + end) / 2;
		if( people_can_eat(areas, mid) >= people){
			start = mid;
		}else{
			end = mid;
		}
	}
	return start;
}

int main() {
	int cases, n, f;
	cin >> cases;

	while (cases--) {
		cin >> n;
		cin>> f;
		vector<double> pie_radius(n);

		for (int i = 0; i < n; i++)
			cin >> pie_radius[i];

		double area = largest_area(pie_radius, f + 1);	// +1 for the host person

		cout << fixed;
		cout << setprecision(4) << area << "\n";
	}
	return 0;
}
