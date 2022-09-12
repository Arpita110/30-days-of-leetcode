class Solution {
public:
    bool checkValidString(string s) {
       int n = s.size();

		stack<int> open,star;

		for(int i = 0; i <n; i++){
			if(s[i] == '*') star.push(i);
			else if(s[i] == '(') open.push(i);
			else{
				if(!open.empty()){
					open.pop();
				}else if(!star.empty()){
					star.pop();
				}else return false;
			}
		}

		if(open.empty()) return true;
		else{
			while(!open.empty()){
				if(!open.empty() and star.empty()) return false;
				if(open.top() < star.top()){
					open.pop();
					star.pop();
				}else return false;
			}

			return true;
		}
    }
};