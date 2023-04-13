next smaller element to right: 
          
         class Solution { 
         public: 
             vector<int> right(vector<int>& nums) { 
                 vector<int> ans; 
                 stack<int> st; 
                 for(int i = nums.size() - 1; i >= 0; i--){ 
                     while(st.empty() && st.top() >= nums[i]) 
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
