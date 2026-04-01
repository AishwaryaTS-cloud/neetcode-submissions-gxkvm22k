class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mp;
        for(string s : strs){
            unordered_map<char,int>freq;
            for(char ch : s)
                freq[ch]++;

            string key = "";
            for(char ke = 'a'; ke <= 'z' ; ke++){
                key += '#';
                key += to_string(freq[ke]);

            }
            mp[key].push_back(s); 
        }
        vector<vector<string>> res;
        for(auto &it : mp){
            res.push_back(it.second);
        }
        return res;
    }
};
