class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<long long,long long>hashtable;
        sort(arr.begin(),arr.end());
        int mod=1000000007;
        for(int i=0;i<arr.size();i++)
        {
            hashtable[arr[i]]++;
        }
        
        long long count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(i>0 && arr[i]==arr[i-1])
            {
                continue;
            }
            int r=target-arr[i];
            
            int j=i+1;
            int k=arr.size()-1;
            while(j<k)
            {
                if(j!=i+1 && arr[j]==arr[j-1])
                {
                    j++;
                }
                else
                {
                    if(arr[j]+arr[k]>r)
                    {
                        k--;
                    }
                    else if(arr[j]+arr[k]==r)
                    {
                        if(arr[j]==arr[i])
                        {
                            if(arr[j]==arr[k])
                            {
                                long long q=hashtable[arr[j]];
                                long long l=(q*(q-1)*(q-2))/6;
                                cout<<l<<endl;
                                
                                count=(count%mod+l%mod)%mod;
                                cout<<count<<endl;
                                cout<<arr[j]<<arr[k];

                            }
                            else if(arr[j]!=arr[k])
                            {
                                long long q=hashtable[arr[j]];
                                long long l=((((q*(q-1))/2)%mod) * (hashtable[arr[k]]%mod))%mod;
                                

                                count=(count%mod+l%mod)%mod;
                                cout<<count<<arr[j]<<arr[k]<<endl;
                            }
                        }
                        else if(arr[j]!=arr[i])
                        {
                            if(arr[j]!=arr[k])
                            {
                                long long q=((hashtable[arr[i]]%mod)*(hashtable[arr[j]]%mod)*(hashtable[arr[k]]%mod))%mod;
                                count=(count%mod+q%mod)%mod;
                                cout<<count<<arr[j]<<arr[k]<<endl;;
                            }
                            else if(arr[j]==arr[k])
                            {
                                 long long q=hashtable[arr[j]];
                                long long l=((((q*(q-1))/2)%mod) * (hashtable[arr[i]]%mod))%mod;
                                count=(count%mod+l%mod)%mod;
                                cout<<count<<arr[j]<<arr[k]<<endl;
                            }
                        }
                        j++;
                        
                    }
                         
                      
                    
                    else if(arr[j]+arr[k]<r)
                    {
                        j++;
                        
                    }
                }
            }

        } 
                
            

        
        return count;
         
        
    }
};