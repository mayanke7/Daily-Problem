#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define DEB(x) cout << #x << "=" << x << endl
#define DEB2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PB push_back
#define F first
#define S second
#define ALL(x) x.begin(), x.end()
typedef pair<int, int>  PII;
typedef pair<LL, LL>    PLL;
const int MOD = 1000000007;
#define PI 3.1415926535897932384626

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int ss= str.size();
        bool cont=false;
        int contCharInd;
        vector<int> M(2,0);
        for(int i=0;i<ss;){
            int p =i;
            while(p<ss && str[p]==str[i]){
                if(str[p]=='A') M[0]++;
                else M[1]++;
                p++;
            }
            if(p-i==2){
                cont=true;
                contCharInd=i;
            }
            i=p;
        }
        if(ss==2){
            if(M[0]==2) cout<<'A'<<endl;
            else if(M[1]==2) cout<<'B'<<endl;
            else cout<<-1<<endl;
        }else if(cont){
            for(int i=0;i<ss;i++){
                if(i==contCharInd) continue;                
                cout<<str[i];
            }
            cout<<endl;
        }else{
            if(M[0]==2) cout<<'A'<<endl;
            else if(M[1]==2) cout<<'B'<<endl;
            else cout<<-1<<endl;
        }
        
    }
}



