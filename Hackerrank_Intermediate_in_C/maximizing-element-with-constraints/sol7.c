


int maxElement(int n, int maxSum, int k){
    if(n == 1){
        return maxSum;
    }

    int l = k, r = k, result = 1, limit_R = n-1;
    while(n <= maxSum && (l > 0 || r < limit_R)){
        n += (r - l + 1);
        if(l > 0){
            l--;
        }
        if(r < limit_R){
            r++;
        }
        result++;
    }
    if(maxSum > n){
        result += (maxSum-n)/(r - l + 1) + 1;
    }
    return result - 1;
}