// stock span problem applies the foundation of the concept - nearest greatest element.
// In this case, NGL.

#include <bits/stdc++.h>
using namespace std;
vector<int> stockSpan(vector<int> arr)
{
    vector<int> v;
    stack<pair<int, int>> s;
    for (int i =0; i<arr.size(); i++)
    {
        while (!s.empty() && s.top().first <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            v.push_back(-1);
        else
            (v.push_back(s.top().second));
        s.push({arr[i], i});
        // pushes a pair into the stack wherein the first=element and second=index.
    }
    return v;
}

int main()
{
    vector<int> arr = {100, 80, 60, 70, 60, 75, 85};
    vector<int> v = stockSpan(arr);
    for (auto &it : v)
        cout << it << " "; // indexes of NGLs
    cout << "\n\n\n";
    for (int i = 0; i < v.size(); i++)
    {
        // v[i] = i - abs(v[i]);
        v[i] = i - v[i];
    }

    //ne need of abs since it includes the value that has to be counted.    
    for (auto &it : v)
        cout << it << " "; //indexes after subtraction printed. 
    return 0;
}


/*
WORKING -- input -  {100, 80, 60, 70, 60, 75, 85}
eg - we have to give the consecutive numbers that are on the left and lesser than the element we are at
--> here - numbers 60, 70, 60, 75 are consecutively lesser than or equal to 75. 
therefore we can count it and get 4. 
similarly we do the same for others. 
herein we can apply the method above to get the output easily. 
*/