class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> v;
        for(int i=left;i<=right;i++)
        {
           int num=i;
            int flag=0;
            while(num)
            {
                int digit=num%10;
                if(digit!=0 && i%digit==0)
                    flag=1;
                else 
                {
                    flag=0;
                    break;
                }
                num=num/10;
            }
            if(flag==1)
                v.push_back(i);
        }
    return v;

    }
};