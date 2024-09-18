class Solution {
public:
    static bool customComparator(int a, int b) 
    {
        string strA = to_string(a);
        string strB = to_string(b);

        if(strA[0]==strB[0])
        {
             int i=1;
            while(strA[i]!='\0' && strB[i]!='\0')
            {
                if(strA[i]!=strB[i])
                return a<b;
            }
            return a>b;
        }
        return strA[0]<strB[0] ;
    }
    string largestNumber(vector<int>& nums) {
        string str;
        int i,j,k,c=0;
        vector<int>numbers=nums;
        sort(numbers.begin(), numbers.end(), customComparator);
        for(i=0;i<numbers.size()-1;i++)
        {
            j=i;
            string strA = to_string(numbers[i]);
            string strB = to_string(numbers[j+1]);
            while(strA[0]==strB[0] && j<numbers.size())
            {
                strB=to_string(numbers[j]);
                if(strB[strB.length()-1]=='0'&& numbers[j])
                {
                    int a=numbers[j];
                    for(k=j;k>i;k--)
                    {
                        numbers[j]=numbers[j-1];
                    }
                    numbers[i]=a;
                }
                j++; 
            }
            i=j;
            }
        for(i=numbers.size()-1;i>=1;i--)
        {
            if(numbers[i]!=0)
            break;
            c++;
        }
        for(i=numbers.size()-c-1;i>=0;i--)
        {
            str += to_string(numbers[i]);
        }
        return str;
    }
};
