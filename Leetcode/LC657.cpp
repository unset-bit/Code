//Robot return to origin
class Solution {
public:
    bool judgeCircle(string moves) {
        map<char, int> mp;

        for(char move : moves)
            mp[move]++;
        
        if(mp['R'] == mp['L'] && mp['U'] == mp['D'])
            return true;
        return false;
    }
};

/*
just count all the movements in directions
Up should be equal to Down and Right should be equal to Left
in order to robot to return to origin.
*/