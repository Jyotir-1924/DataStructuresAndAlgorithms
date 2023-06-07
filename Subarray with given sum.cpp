class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>a, int n, long long chk)
    {
        vector<int>ans;
        int s=0;
        long long sum=a[0];
        bool flag=false;
        for(int i=1 ; i<=n ; i++)
        {
            while(sum>chk&&s<i-1)
            {
                sum-=a[s];
                s++;
            }
            if(sum==chk)
            {
                ans.push_back(s+1);
                ans.push_back(i);
                flag=true;
                return ans;
            }
            if(i<n)
                sum+=a[i];
        }
        return {-1};
    }
};