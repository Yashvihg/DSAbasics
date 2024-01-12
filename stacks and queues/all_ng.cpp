#include <bits/stdc++.h>
using namespace std;

vector<int> nsl(vector<int> &arr) {
  int n = arr.size();
  stack<int> stk;
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    while (!stk.empty() && arr[i] < stk.top()) {
      stk.pop();
    }
    if (stk.empty()) {
      ans.push_back(-1);
    } else
      ans.push_back(stk.top());
    stk.push(arr[i]);
  }
  return ans;
}

vector<int> nsr(vector<int> &arr) {
  int n = arr.size();
  stack<int> stk;
  vector<int> ans;
  for (int i = n - 1; i >= 0; i--) {
    while (!stk.empty() && arr[i] < stk.top()) {
      stk.pop();
    }
    if (stk.empty()) {
      ans.push_back(n);
    } else
      ans.push_back(stk.top());
    stk.push(arr[i]);
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

vector<int> ngl(vector<int> &arr) {
  int n = arr.size();
  stack<int> stk;
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    while (!stk.empty() && arr[i] > stk.top()) {
      stk.pop();
    }
    if (stk.empty()) {
      ans.push_back(-1);
    } else
      ans.push_back(stk.top());
    stk.push(arr[i]);
  }
  return ans;
}

vector<int> ngr(vector<int> &arr) {
  int n = arr.size();
  stack<int> stk;
  vector<int> ans;
  for (int i = n - 1; i >= 0; i--) {
    while (!stk.empty() && arr[i] > stk.top()) {
      stk.pop();
    }
    if (stk.empty()) {
      ans.push_back(-1);
    } else
      ans.push_back(stk.top());
    stk.push(arr[i]);
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  vector<int> ans = ngl(arr);
  for (auto &it : ans)
    cout << it << "   ";
  return 0;
}