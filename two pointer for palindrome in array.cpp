class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i =0; i <=words.size()-1; ++i)
        {
            
            if(is_palin(words[i]))
            {
                return words[i];
            }
        }
        return "";
    }
    bool is_palin(string i)
    {
        int j=0;
        int k=i.size()-1;
        while(j<k)
        {
            if(i[j]!=i[k])
            {
                return false;
            }
            j++;
            k--;
        }
        return true;
    }
};
