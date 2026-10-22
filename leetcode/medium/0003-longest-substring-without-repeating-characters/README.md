# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 331 ms (beats 9.97%)  
**Memory:** 81.4 MB (beats 24.19%)  
**Submitted:** 2026-10-22T03:39:51.623Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>charset;
        int left =0;
        int max_len=0;
        for(int right=0;right<s.size();right++){
            while(charset.count(s[right])){ 
                 charset.erase(s[left]);
                 left++;
            }
          charset.insert(s[right]);
          max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)