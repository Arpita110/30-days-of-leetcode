class Solution {
public:
   vector<vector<int>> ans;
	void f(int i, int k, int sum, vector<int> &v, vector<int> &curr) {
		if (k == 0 && sum == 0) {
			ans.push_back(curr);
			return;
		}
		if (i == 9) return;
		if (sum - v[i] >= 0)
        {
			curr.push_back(v[i]);
			f(i + 1, k - 1, sum - v[i], v, curr);
			curr.pop_back();
		}
		f(i + 1, k, sum, v, curr);
	}

	vector<vector<int>> combinationSum3(int k, int n) {
		vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		vector<int> curr;
		f(0, k, n, v, curr);
		return ans;
	}
};