class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
            int element_sum = n * (n + 1) / 2 ;
            int sum = 0;

            for(int i = 0; i < n - 1; i++)
                sum += array[i];
            return elements_sum - sum;
    }
};
