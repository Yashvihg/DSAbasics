// to count all the occurances of anagrams

#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<int> countOccurance(string str, string window)
{
    int i = 0, j = 0; // int ans=0
    vector<int> ans;
    unordered_map<char, int> mp;
    for (auto &it : window)
        mp[it]++;
    int k = window.size();
    int count = window.size();
    while (j < str.size())
    {
        if (mp.find(str[j]) != mp.end())
        {
            mp[str[j]]--;
            if (mp[str[j]] == 0)
                count--;
        }
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            if (count == 0)
                ans.push_back(i); // ans++;
            if (mp.find(str[i]) != mp.end())
            {
                mp[str[i]]++;
                if (mp[str[i]] == 1)
                    count++;
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    string window, str;
    cout << "enter window and string: ";
    cin >> window;
    cin >> str;
    vector<int> answer = countOccurance(str, window);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << " " << answer[i];
    }
    return 0;
}

// NO MAP -->
/*
#include <bits/stdc++.h>
using namespace std;
int countAnagrams(string mainStr , string subStr){
        int i =0, j=0,countVariable=0,ac=0;
        int neededMap[27]={0};
        for(int i=0;i<subStr.length();i++){
                neededMap[subStr[i]-'a']++;
                countVariable++;
        }
        while(j<mainStr.length()){
                neededMap[mainStr[j]-'a']--;
                if(neededMap[mainStr[j]-'a']==0){
                        countVariable--;
                }
                if(j-i+1<subStr.length()){
                        j++;
                }
                else if(j-i+1==subStr.length()){
                        if(countVariable==0){
                                ac++;
                        }
                        j++;
                        if(neededMap[mainStr[i]-'a']==0){
                                neededMap[mainStr[i]-'a']++;
                                countVariable++;
                        }
                        i++;
                }
        }
        return ac;
}
int main(){
        string mainStr,subStr;
        cin>>mainStr;
        cin>>subStr;
        cout<<countAnagrams(mainStr,subStr);
        return 0;
}
*/

/*
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> mp;
        int i=0, j=0;
        for(auto &it: p) mp[it]++;
        int k = p.size(); //window size
        int count = p.size();
        while(j<s.size()){
            mp[s[j]]--;
            if(mp[s[j]] == 0) count--;
            if(j-i+1 < k) j++;
            else if(j-i+1 == k){
                if(count == 0)
                    ans.push_back(i);
                if(mp[s[i]] == 0){
                    mp[s[i]]++;
                    //if(mp[s[i]]>0)
                    count++;
                }
                j++;
                i++;
            }
        }
        return ans;
    }
};
*/