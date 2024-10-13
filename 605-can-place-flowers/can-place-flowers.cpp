class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        if(s==1){
            if(n==0)return true;
            else {
                if(flowerbed[0]==0)return true;
                else return false;
            }
        }
        for(int i=0;i<s;i++)
        {
            if(n==0)break;
            if(i==0)
            {
                if((flowerbed[i+1]==0)&&(flowerbed[i]==0))
                {flowerbed[i]=1;n--;}
            }
            else if(i==s-1)
            {
                if((flowerbed[i-1]==0)&&(flowerbed[i]==0))
                {flowerbed[i]=1;n--;}
            }
            else
            {
                if((flowerbed[i-1]==0)&&(flowerbed[i+1]==0)&&(flowerbed[i]==0))
                {
                    flowerbed[i]=1;
                    n--;
                }                
            }
        }
        if(n==0)return true;
        else return false;
    }
};