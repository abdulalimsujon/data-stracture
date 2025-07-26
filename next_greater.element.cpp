class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> ngeMap;  
        for (int num : nums2) {
            while (!st.empty() && num > st.top()) {
                ngeMap[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        while (!st.empty()) {
            ngeMap[st.top()] = -1;
            st.pop();
        }

  
        vector<int> result;
        for (int num : nums1) {
            result.push_back(ngeMap[num]); 
        }

        return result;
    }
};
