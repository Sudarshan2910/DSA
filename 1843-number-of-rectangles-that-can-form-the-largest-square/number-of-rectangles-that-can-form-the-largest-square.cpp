class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxlen;
        int count=0;
        vector<int> list;
        for(int i=0;i<rectangles.size();i++)
        {
            (rectangles[i][0]>rectangles[i][1])?list.push_back(rectangles[i][1]) : list.push_back(rectangles[i][0]);
        }
        maxlen=list[0];
        for(int i=0;i<list.size();i++)
        {
            if(maxlen<list[i])
            {
                maxlen=list[i];
            }
        }
        for(int i=0;i<list.size();i++)
        {
            if(maxlen==list[i])
            {
                count++;
            }
        }
        return count;
    }
};