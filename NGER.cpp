Next greater element to right: 
  
         class Solution { 
         public: 
             vector<int> nextLargerElement(vector<int> nums){ 
                 int n = nums.size(); 
                 stack<int> st; 
                 st.push(-1); 
                 vector<int> ans(n); 
                 for(int i = n - 1; i >= 0; i--){ 
                     while(!st.empty() && st.top() <= nums[i]) 
                         st.pop(); 
                     if(st.empty()) 
                         ans[i] =- 1; 
                     else 
                         ans[i] = st.top(); 
                     st.push(nums[i]); 
                 } 
                 return ans; 
             } 
         }; 
