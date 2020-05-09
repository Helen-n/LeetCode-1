class Solution {
public:
void backtrace(vector<string> &res, string &str, const string& s, vector<int> &used)
{
	if (str.length() == s.size())
	{
		res.push_back(str);
		return;
	}
	for (int i = 0; i<s.length(); i++)
	{
		if (used[i] == 1) continue;
		if (i>0 && s[i - 1] == s[i] && used[i-1]==1) continue;
		used[i] = 1;
		str += s[i];
		backtrace(res, str, s, used);
		str.pop_back();
		used[i] = 0;
	}
}

	vector<string> permutation(string s)
	{
		sort(s.begin(), s.end());
		vector<int> used(s.length(), 0);
		vector<string> res;
		string str = "";
		backtrace(res, str, s, used);
		return res;
	}
};
