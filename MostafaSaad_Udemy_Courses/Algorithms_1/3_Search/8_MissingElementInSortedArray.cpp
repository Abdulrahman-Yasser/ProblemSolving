// ! bash/gpp

#include <math.h>
#include <stdio.h>


int binarySearchSolutiuon(int array[], int size, int k){
	int* temp_arr = (int*)malloc(sizeof(int)*size);
	temp_arr[0] = 0;

	int temp, mid, pos, r = size - 1, l = 0, min = array[size - 1];

	while(r > l){
		mid = (r + l) / 2;
		temp = array[mid] - array[l] - (mid - l) + 1;

		if(abs(temp - k) < min){
			pos = mid;
			min = abs(temp - k);
		}

		if(temp < k){
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	temp = array[pos] - array[l] - (pos - l) + 1;
	min = abs(temp - k);
	if(temp > k){
		while(min >= 0){
			array[pos]--;
			min--;
		}
	}else if(temp < k){
		while(min >= 0){
			array[pos]++;
			min--;
		}
	}
	return array[pos];
}




int main(){
	int a[] = {4, 7, 9, 10};
	int k = 2;
	printf("\n%d\n",binarySearchSolutiuon(a, 4, k));
}
