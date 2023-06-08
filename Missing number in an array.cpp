class Solution{
  public:
    int MissingNumber(vector<int> &a, int n)
    {
        sort(a.begin(),a.end());
        for(int i=0 ; i<a.size() ; i++ )
        {
            if(a[i] != i+1 )
                return a[i]-1;
        }
        return n;
    }
};