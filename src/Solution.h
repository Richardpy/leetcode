#include <string>
#include <vector>
using namespace std;

class Solution{
public:
	/* String */
	bool isValid(string s);
	string convert(string s, int nRows);
	int romanToInt(string s);
	string intToRoman(int i);
	string longestCommonPrefix(vector<string> &strs);
	int atoi(const char *s);
	char* strStr(char *haystack, char *needle);
	vector<int> computePrefixFunction(char* patten); // helper function for KMP
	char* strStr_kmp(char *haystack, char *needle);
};