
#include <algorithm>
#include <stdbool.h>
bool compare(int  a, int b){
    return (a < b);
}


void print(vector<int>& a){
    for(auto i = a.begin(); i < a.end(); i++){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

/* Fast solution */

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int my_profits[100010] = { 0 };
        int sum = 0;
        sort(worker.begin(), worker.end(), compare);
        for(int i = 0; i < profit.size(); ++i ){
            if(my_profits[ profit[i] ] == 0 || my_profits[ profit[i] ] > difficulty[i]){
                my_profits[ profit[i] ] = difficulty[i];
            }
        }
        int last_id = 100000;
        for(int i = worker.size() - 1; i >= 0; --i ){
            for(int k = last_id; k >= 0; --k ){
                if(worker[i] >= my_profits[k] && my_profits[k] > 0){
                    sum += k;
                    last_id = k + 1;
                    break;
                }
            }
        }
        return sum;
    }
};


/* Slow solution */

// class Solution {
// public:
//     int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
//         int sum = 0;

//         std::vector<int> indices(difficulty.size());
//         std::iota(indices.begin(), indices.end(), 0);
//         std::sort(indices.begin(), indices.end(),
//            [&](int A, int B) -> bool {
//                 return profit[A] > profit[B];
//             });

//         for(int i = 0; i < worker.size(); ++i ){
//             for(int j = 0; j < profit.size(); ++j ){
//                 if(difficulty[ indices[j] ] <= worker[i] ){
//                     sum += profit[ indices[j] ];
//                     break;
//                 }
//             }
//         }
//         return sum;
//     }
// };