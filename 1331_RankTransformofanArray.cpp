class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> vec = arr;
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        map<int, int> rankMap;
        for (int i = 0; i < vec.size(); i++) {
            rankMap[vec[i]] = i + 1; 
        }
        vector<int> result;
        for (int num : arr) {
            result.push_back(rankMap[num]);
        }

        return result;
    }
};
