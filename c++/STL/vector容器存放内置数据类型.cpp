#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
void print01(int val)
{
    cout<<val<<endl;
}
void test01()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }

    for_each(v.begin(),v.end(),print01);
}