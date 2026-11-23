# DECINC - Rating 718

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-23T13:20:21.511Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, x, b, y;
        cin >> a >> x >> b >> y;

        if (a * y > b * x) {
            cout << "ALICE" << endl;
        } 
        else if (a * y < b * x) {
            cout << "BOB" << endl;
        } 
        else {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DECINC)