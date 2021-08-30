class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        deque<char> dq;
        deque<char> dq2;
        
         check(s , 0 , dq);       
         check(t , 0 , dq2);   
       
         if(dq.empty() && dq2.empty())
             return 0;
             
         string s1;
         string s2;
        
         while(!dq.empty())
         {
             s1.push_back(dq.front());
             dq.pop_front();
         }
        
         while(!dq2.empty())
         {
             s2.push_back(dq2.front());
             dq2.pop_front();
         }
        
        if(s1 == s2)
            return 1;
        
        return 0;
    }
    
    void check(string s , int i , deque<char> &dq)
    {
        if(i >= s.length())
            return ;
        
        if(s[i] == '#')
        {
             if(!dq.empty())
            {
                dq.pop_back();   
                check(s,i+1,dq);   
             }
             else
            {
                check(s,i+1,dq);  
            }
                
        }
        else
        {
            
                check(s,i+1,dq);
                dq.push_front(s[i]);
        }
        
        return ;
            
    }
};