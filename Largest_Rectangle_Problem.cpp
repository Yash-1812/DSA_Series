class Solution {
public:
    
    int Right_Smallest(int num , vector<int> vec , int idx){
        for(int i = idx + 1 ; i < vec.size() ; i++){
            if(vec[i] < num){
                return i;
            }
        }
        return vec.size();
    }

    int Left_Smallest(int num , vector<int> vec , int idx){
        for(int i = idx - 1 ; i >= 0 ; i--){
            if(vec[i] < num){
                return i;
            }
        }
        return -1;
    }

    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        //if(heights.size() == 1)return heights[0];
        for(int i = 0 ; i < heights.size() ; i++){
            int r = Right_Smallest(heights[i] , heights , i);
            int l = Left_Smallest(heights[i] , heights , i);
            int curr_area = heights[i] * (r - l - 1);
            ans = max(ans , curr_area);
        }
        return ans;
    }
};
