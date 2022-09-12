class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
	vector<vector<int>> ans;
	int start=intervals[0][0],end=intervals[0][1];
	for(int i=1;i<intervals.size();i++){
		if(intervals[i][0]<=end){
			end=max(end,intervals[i][1]);
		}
		else{
			ans.push_back({start,end});
			start=intervals[i][0],end=intervals[i][1];
		}
	}
	ans.push_back({start,end});
	return ans;
    }
    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), idx = n, i = 0;
        while(i < n and newInterval[0] > intervals[i][0])
        {
            i++;
        }
        intervals.insert(intervals.begin() + idx, newInterval);
        return merge(intervals);
    }
    
};