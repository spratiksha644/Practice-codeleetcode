Next greater element to left: 
          
         class Solution { 
         public: 
             vector<int> left(vector<int>& nums){ 
                 vector<int> ans; 
                 stack<int> st; 
                 for(int i = 0; i < nums.size(); i++) { 
                     while(!st.empty() && st.top() < nums[i]) 
                         st.pop(); 
                     if(st.empty()) 
                         ans.push_back(-1); 
                     else 
                         ans.push_back(st.top()); 
                     st.push(nums[i]); 
                 } 
                 return ans; 
             } 
         };
