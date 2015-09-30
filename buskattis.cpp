#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main()  {
    int i=0,n, num;
    cin >> n;
    while (i<n) {
        int k =0;
        cin >> num;
        for(int j = 0; j<num; ++j)  {
            k = 2*k+1;
        }
        cout << k;
        ++i;
    }
    return 0;
}









