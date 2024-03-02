#include <stdio.h>
#include <stdlib.h>

int mostBalancedPartition(int parent_count, int *parent, int files_size_count, int *files_size)
{
    for(int i = parent_count - 1; i >= 1; i--){
        files_size[parent[i]] += files_size[i];
    }

    int mindiff = files_size[0];
    for(int i = 1; i < files_size_count; i++){
        int diff = abs(files_size[0] - (2 * files_size[i]));
        if(diff < mindiff){
            mindiff = diff;
        }
    }
    return mindiff;
}
int parent_count = 4;
int parent[4] = {-1, 0, 1, 2};
int files_size_count = 4;
int files_size[4] = {1, 4, 3, 4};

int main()
{

	int result = mostBalancedPartition(parent_count, parent, files_size_count, files_size);
	printf("\n%d\n", result);


	return 0;
}