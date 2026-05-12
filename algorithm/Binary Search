//左闭右开区间
int bin_search01(const vector<int>& a, int num) {
    int left = 0, right = a.size();

    while(left < right) {
        int mid = left + (right - left)/2;
        
        if(a[mid] >= num) right = mid;
        else left = mid + 1;
    }

    return left;
}


//左闭右闭区间
int bin_search02(const vector<int>& a, int num) {
    int left = 0, right = a.size() - 1;
    int ans = a.size();

    while(left <= right) {
        int mid = left + (right - left)/2;
        
        if(a[mid] >= num) {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }

    return ans;
}
