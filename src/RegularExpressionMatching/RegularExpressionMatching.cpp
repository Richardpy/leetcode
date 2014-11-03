// Source : https://oj.leetcode.com/problems/longest-common-prefix/
// Author : Fan Chou
// Date   : 2014-11-03


/**********************************************************************************
*
* Implement regular expression matching with support for '.' and '*'.
*
* '.' Matches any single character.
* '*' Matches zero or more of the preceding element.
*
* The matching should cover the entire input string (not partial).
*
* The function prototype should be:
* bool isMatch(const char *s, const char *p)
*
* Some examples:
* isMatch("aa","a") �� false
* isMatch("aa","aa") �� true
* isMatch("aaa","aa") �� false
* isMatch("aa", "a*") �� true
* isMatch("aa", ".*") �� true
* isMatch("ab", ".*") �� true
* isMatch("aab", "c*a*b") �� true
*
*
**********************************************************************************/#include "../Solution.h"

bool Solution::matchStar(char c, char* reg, char* text){
	do
	{
		if (isMatch(text, reg))
			return true;
	} while (*text && (*text++ == c || c == '.'));

	return false;
}

bool Solution::isMatch(char *text, char*reg) {
	if (!*text && !*reg)
		return true;

	if (*text && *reg){
		if (*(reg + 1) == '*')
			return matchStar(*reg, reg + 2, text);
		if ((*reg == '.') || (*text == *reg))
			return isMatch(text + 1, reg + 1);
	}

	return false;
}

