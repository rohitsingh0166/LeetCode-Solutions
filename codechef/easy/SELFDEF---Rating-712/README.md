# SELFDEF - Rating 712

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-20T12:54:06.375Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,n;
	    cin>>x>>n;
	    if(x*100>n){
	        cout<<0<<endl;
	    }else{
	         int remaining = n - x * 100;
            cout << (remaining + 99) / 100 << endl;
	    }
	}
	return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SELFDEF)