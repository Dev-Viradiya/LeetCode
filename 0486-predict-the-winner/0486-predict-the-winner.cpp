class Solution {
public:

    bool solve(int i,int j,vector<int>& nums,int p1,int p2,int turn){

        if(i > j){
            if(p1 >= p2){
                return true;
            }
            return false;
        }

        if(turn == 1){
            return solve(i+1,j,nums,p1+nums[i],p2,0) || solve(i,j-1,nums,p1+nums[j],p2,0);
        }else{
            return solve(i+1,j,nums,p1,p2+nums[i],1) && solve(i,j-1,nums,p1,p2+nums[j],1);
        }
    }


    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int turn = 1;
        return solve(0,n-1,nums,0,0,turn);
    }
};