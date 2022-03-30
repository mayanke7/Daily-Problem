// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution{
public:
    //https://practice.geeksforgeeks.org/problems/word-break/0
    bool wbPossible(string A, unordered_map<char, vector<string>> &M,
    int index, int size){
        if(index==size) return true;
        char c= A[index];
        auto v= M[c];
        bool res= false;
        for(auto s: v){
            int p=index;
            bool matching=true;
            for(auto nc: s){
                if(p>size || nc!=A[p]) {
                    matching=false;
                    break;
                }
                p++;
            }
            if(matching)  res= res || wbPossible(A,M,p,size);
                
        }
        return res;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        int ss= A.size();
        unordered_map<char, vector<string>> M;
        for(auto s: B){
            M[s[0]].push_back(s);
        }
        return wbPossible(A, M,0,ss);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends