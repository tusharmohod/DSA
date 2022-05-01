vector<int> twoSum(vector<int>& arr, int target) {
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    int sum = 0;
    while(i < j) {
        sum = arr[i] + arr[j];
        if(sum == target) {
            return vector<int>({i + 1, j + 1});
        }
        else if(sum < target) {
            i++;
        }
        else {
            j--;
        }
    }
    return vector<int>();
}