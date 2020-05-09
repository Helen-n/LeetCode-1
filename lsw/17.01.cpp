class Solution {
public:
    int add(int a, int b) 
    {
        unsigned int temp_reg=0;
        while(b != 0)
        {
           temp_reg = a & b;
           if(temp_reg != 0)
            {
               temp_reg=temp_reg<<1;
            }
           a ^= b;
           b = temp_reg;
        }       
        return a;
    }
};
