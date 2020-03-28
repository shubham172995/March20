class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int p1=0, p2=height.size()-1;
        while(p1<=p2){
            int temp=(height[p1]<height[p2]?height[p1]*(p2-p1):height[p2]*(p2-p1));
            area=area>temp?area:temp;
            if(height[p1]<height[p2])
                ++p1;
            else --p2;
        }
        return area;
    }
};