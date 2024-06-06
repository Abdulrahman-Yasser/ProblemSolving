#include <iostream>
using namespace std;


int binary_search(double* pie_area, int M, int N, int value){
	int start = 0, end = M-1, mid = 0, sol;
	while(end >= start){
		mid = (end + start) / 2;
		if(pie_area[mid] > value){
			sol = mid;
			start = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	return sol;
}


int solution(int *pie_radius, int M, int N){
	sort(pie_radius, M);
	double *pie_area = (double*)malloc(M*sizeof(double));
	for(int i = 0; i < M; i++){
		pie_area[i] = pie_radius[i] * pie_radius[i] * 22 / 7;
	}
	int end = (int)pie_radius[M-1], start = 0, mid = 0, sol;
	while(end >= start){
		mid = (end + start) / 2;
		if(binary_search(pie_radius, M, N, mid) >= N){
			start = mid + 1;
			sol = mid;
		}else{
			end = mid -1 ;
		}
	}
	search_for_mid(sol);
}


int main() {
	// your code goes here
		
	return 0;
}
