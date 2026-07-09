class Solution {
public:
    bool isAnagram(string s, string t) {
        // checking if both the string length are equal or not
        if(s.length()!=t.length())
        {
            return false;
        }
        
        // sort both for comparing 
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        // comparing the string 
        if(s==t)
        {
            return true;
        }
        return false;
        
    }
};
