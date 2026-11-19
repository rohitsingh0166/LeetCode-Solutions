# CHEFEREN - Rating 702

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-19T13:25:48.085Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;

        int freeMemory = S - X - Y;

        if (freeMemory >= Z) {
            cout << 0 << endl;
        }
        else if (freeMemory + Y >= Z) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CHEFEREN)