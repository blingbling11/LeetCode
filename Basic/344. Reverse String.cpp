class Solution {
public:
	string reverseString(string s) {
		int i = 0;
		int len = s.length();
		for (; i<len / 2; i++) {
			char temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}
		return s;
	}
};