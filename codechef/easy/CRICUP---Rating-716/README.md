# CRICUP - Rating 716

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T17:57:24.926Z  

```c_cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int count = 0;

        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if(a >= 10 && a <= 60) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CRICUP)