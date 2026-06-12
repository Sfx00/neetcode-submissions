class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<std::string> sstrs(strs);
        vector<vector<string>> res;
        map <std::string , vector<string>> m;
        
        for(std::string& a : sstrs)
            sort(a.begin(), a.end());
        for(int i = 0; i < sstrs.size(); i++)
        {
            // vector<int> tmp;
            // tmp.push_back(i);
            m[sstrs[i]].push_back(strs[i]);
        }
        for(auto i = m.begin(); i != m.end(); i++)
        {
            res.push_back(i->second);
        }
        return res;
    }
};
