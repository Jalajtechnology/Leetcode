class Solution {
public:
    int binarysearch(int target,int start,int end,vector<int>difficulty)
    {
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(difficulty[mid]==target)
            {
                return difficulty[mid];
            }
            else if(mid>start &&(target<difficulty[mid] && target>difficulty[mid-1]))
            {
                return difficulty[mid-1];
            }
            else if(mid<end && target>difficulty[mid] && target<difficulty[mid+1])
            {
                return difficulty[mid];
            }
            
            else if(target<difficulty[mid])
            {
                end=mid-1;
            }
            else if(target>difficulty[mid])
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        unordered_map<int,int>hashtable;
        
        for(int i=0;i<difficulty.size();i++)
        {
            if(hashtable.find(difficulty[i])!=hashtable.end())
            {
                if(hashtable[difficulty[i]]<profit[i])
                {
                    hashtable[difficulty[i]]=profit[i];
                }
            }
            else
            {
                hashtable[difficulty[i]]=profit[i];

            }
            
            
            
        }
        
        sort(difficulty.begin(),difficulty.end());
        for(int i=1;i<difficulty.size();i++)
        {
            if(hashtable[difficulty[i]]<hashtable[difficulty[i-1]])
            {
                hashtable[difficulty[i]]=hashtable[difficulty[i-1]];
            }

        }
        int maxprofit=0;
        for(int i=0;i<worker.size();i++)
        {
            int k=binarysearch(worker[i],0,difficulty.size()-1,difficulty);
            
            if(k!=-1)
            {
                maxprofit=maxprofit+hashtable[k];
                cout<<hashtable[k]<<endl;
                

            }
            else
            {
                if(worker[i]>difficulty[difficulty.size()-1])
                {
                    maxprofit=maxprofit+hashtable[difficulty[difficulty.size()-1]];
                    
                }

            }

        }
        return maxprofit;

        
    }
};