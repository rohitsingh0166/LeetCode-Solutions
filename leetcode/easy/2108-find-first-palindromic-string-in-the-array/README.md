# Find First Palindromic String in the Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of strings `words`, return  *the first  **palindromic**  string in the array*. If there is no such string, return  *an  **empty string*** `""`.

A string is  **palindromic**  if it reads the same forward and backward.

 

Original
C++
 **Example 1:** 

```
Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.

```

 **Example 2:** 

```
Input: words = ["notapalindrome","racecar"]
Output: "racecar"
Explanation: The first and only string that is palindromic is "racecar".

```

 **Example 3:** 

```
Input: words = ["def","ghi"]
Output: ""
Explanation: There are no palindromic strings, so the empty string is returned.

```

 

 **Constraints:** 

- 1 <= words.length <= 100
- 1 <= words[i].length <= 100
- words[i] consists only of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 11 ms (beats 23.36%)  
**Memory:** 29.7 MB (beats 21.00%)  
**Submitted:** 2026-11-22T17:36:19.228Z  

```cpp

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            string rev = s;
            reverse(rev.begin(), rev.end());

            if (s == rev) {
                return s;
            }
        }
        return "";
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/)