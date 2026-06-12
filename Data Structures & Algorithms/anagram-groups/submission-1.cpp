class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<std::string> sstrs(strs);
        vector<vector<string>> res;
        map <std::string , vector<string>> m;
        
        for(std::string& a : strs)
        {
            std::string tmp = a;
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(a);
            
        }
        // for(int i = 0; i < sstrs.size(); i++)
        // {
        //     // vector<int> tmp;
        //     // tmp.push_back(i);
        // }
        for(auto i = m.begin(); i != m.end(); i++)
        {
            res.push_back(i->second);
        }
        return res;
    }
};
