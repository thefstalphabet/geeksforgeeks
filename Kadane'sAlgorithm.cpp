class Solution{
	public:
	long long maxSubarraySum(int arr[], int n){
        	long long maxSum = INT_MIN, currSum = 0;
    		for (int i = 0; i < n; i++)
    		{
    			currSum = currSum + arr[i];
    			if (maxSum < currSum)
    				maxSum = currSum;
    
    			if (currSum < 0)
    				currSum = 0;
    		}
    		return maxSum;
        
    	}
};