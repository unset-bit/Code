//length of the last word

class Solution {
public:
    int lengthOfLastWord(string s) {
        bool found = false;
        int count = 0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(found && s[i] == ' ')
                return count;

            if(s[i] != ' ')
            {
                if(!found)
                    found = true;
                count++;
            }

        }
        return count;
    }
};