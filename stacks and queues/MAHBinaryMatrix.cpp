// MAX area of rectangle in Bianry matrix

#include<bits/stdc++.h>
using namespace std;

    int MAH(vector<int> &hist){
        stack<int> s;
        int maxEle = 0;
        int n = hist.size();
        for(int i=0; i<=n; i++){
            while(!s.empty() && (i==n || hist[s.top()]>=hist[i])){
                int height = hist[s.top()];
                s.pop();
                int width;
                if(s.empty()) width = i;
                else width = i - s.top() - 1;
                maxEle = max(maxEle, width*height);
            }
            s.push(i);
        }
        return maxEle;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int>hist;
        int n=matrix.size(), m=matrix[0].size();
        for(int j=0; j<m; j++)
            hist.push_back(matrix[0][j]);
        int maxOfmat = MAH(hist);
        for(int i=0; i<n; i++){
            for(int j=0; j<m;j++){
                if(matrix[i][j] == 0) hist[j] = 0;
                else hist[j] += matrix[i][j];
            }
            maxOfmat = max(maxOfmat, MAH(hist));
        }
        return maxOfmat;
    }

int main(){
    vector<vector<int>> matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]];
    // int n, m;
    // char ele;
    // cout<<"enter row and col: ";
    // cin>>n;
    // cin>>m;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         cin>>ele;
    //         matrix[i].push_back(ele);
    //     }
    // }
    int ans = maximalRectangle(matrix);
    cout<< "the max val is --> "<<ans;
    return 0;
}


