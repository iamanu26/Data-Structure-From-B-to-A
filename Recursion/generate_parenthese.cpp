#include<bits/stdc++.h>

using namespace std;

void helper(vector<string>&ans , int open_br , int close_br , int n , string s)
{
    if(open_br == n && close_br == n)
    {
        ans.push_back(s);
        return;
    }
    if(open_br < n)
    {
        helper(ans , open_br + 1 , close_br , n , s+"(");
    }
    if(close_br<open_br)
    {
        helper(ans , open_br , close_br + 1 , n , s+")");
    }
}

void print(vector<string>&arr)
{
    int n = arr.size();

    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    vector<string> arr;
    int n ;
    cout<<"Enter the value for generating the parentheses"<<endl;
    cin>>n;
    string s;
    helper(arr , 0 , 0 , n , s);
    print(arr);

    return 0;
}