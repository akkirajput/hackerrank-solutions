problem link-https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v; int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    { 
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    cout<<v[i]<<" ";
    return 0;
}
