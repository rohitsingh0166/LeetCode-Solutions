# Implement Trie (Prefix Tree)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A  **trie**  (pronounced as "try") or  **prefix tree**  is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

Implement the Trie class:

- Trie() Initializes the trie object.
- void insert(String word) Inserts the string word into the trie.
- boolean search(String word) Returns true if the string word is in the trie (i.e., was inserted before), and false otherwise.
- boolean startsWith(String prefix) Returns true if there is a previously inserted string word that has the prefix prefix, and false otherwise.

 

 **Example 1:** 

```
Input
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
Output
[null, null, true, false, true, null, true]

Explanation
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // return True
trie.search("app");     // return False
trie.startsWith("app"); // return True
trie.insert("app");
trie.search("app");     // return True

```

 

 **Constraints:** 

- 1 <= word.length, prefix.length <= 2000
- word and prefix consist only of lowercase English letters.
- At most 3 * 104 calls in total will be made to insert, search, and startsWith.

## Solution

**Language:** C++  
**Runtime:** 36 ms (beats 56.79%)  
**Memory:** 50.4 MB (beats 74.76%)  
**Submitted:** 2026-11-26T09:00:06.534Z  

```cpp
class Trie {
public:
    Trie* array[26];
    bool isEndOfWord;

    Trie() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++)
            array[i] = nullptr;
    }

    void insert(string word) {
        Trie* current = this;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->array[index] == nullptr)
                current->array[index] = new Trie();

            current = current->array[index];
        }

        current->isEndOfWord = true;
    }

    bool search(string word) {
        Trie* current = this;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->array[index] == nullptr)
                return false;

            current = current->array[index];
        }

        return current->isEndOfWord;
    }

    bool startsWith(string prefix) {
        Trie* current = this;

        for (char ch : prefix) {
            int index = ch - 'a';

            if (current->array[index] == nullptr)
                return false;

            current = current->array[index];
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/implement-trie-prefix-tree/)