class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,maxi;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        maxi=sum;
        for(int i=0;i<k;i++){
            sum=sum-cardPoints[k-i-1]+cardPoints[cardPoints.size()-i-1];
            if(sum>maxi)
                maxi=sum;
        }
        return maxi;
    }
};
