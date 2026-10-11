# C_RATING - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T13:21:51.017Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << max(0, z - y / x) << endl;
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/C_RATING)