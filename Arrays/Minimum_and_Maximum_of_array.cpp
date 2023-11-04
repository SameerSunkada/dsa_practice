#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> minMax= {*min_element(a,a+n), *max_element(a,a+n)};
    return minMax;
}