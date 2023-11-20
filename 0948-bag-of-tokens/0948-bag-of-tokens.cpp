class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       
        int score=0;
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
          int max=0;
        while(i<j)
        {
            if(power>=tokens[i])
            {
                score++;
                power=power-tokens[i];
                i++;
            }
            else if(power<tokens[i] && score<1)
            {
                return 0;
            }
            else if(power<tokens[i] && score>=1)
            {
                if(score>max)
                {
                    max=score;
                }
                power=power+tokens[j];
                score--;
                j--;
            }
        }
        if(i==j)
        {
            if(power>=tokens[i])
            {
                score++;
                if(max<score)
                {
                    max=score;
                }
            }
            else if(power<tokens[i])
            {
                if(max<score)
                {
                    max=score;
                }
            }
        }
        return max;
        
        
    }
};