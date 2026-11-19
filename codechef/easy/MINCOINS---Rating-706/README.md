# MINCOINS - Rating 706

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-19T13:32:14.097Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        int even = N / 2;
        int odd = N - even;

        int total = even * A + odd * B;

        cout << total << endl;
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MINCOINS)