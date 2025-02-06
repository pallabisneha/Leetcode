class Solution {
public:
    vector<bool> kidsWithCandies (vector<int>& candies, int extraCandies){
    int n=candies.size();
    int i;
       int maxi = *max_element(begin(candies), end(candies));
       
       vector<bool>result(n,false);
        for(i=0;i<n;i++)
        {
            if(candies[i] + extraCandies >= maxi)
            {
            result[i]=true;
            }

        }
    return result;
}
};