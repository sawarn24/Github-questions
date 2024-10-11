class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    vector<pair<int, string>> people;
        
        for (int i = 0; i < names.size(); ++i) {
            people.push_back({heights[i], names[i]});
        }
        
        
        sort(people.begin(), people.end(), [](pair<int, string>& a, pair<int, string>& b) {
            return a.first > b.first;
        });
        
        
        vector<string> result;
        for (auto& p : people) {
            result.push_back(p.second);
        }
        
        return result;
    }
};