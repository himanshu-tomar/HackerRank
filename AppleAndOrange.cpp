#include<iostream>
#include<vector>
using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector<int> oranges) {
    for(int i=0;i<apples.size();i++){
        apples[i]+=a;
    }
    for(int i=0;i<oranges.size();i++){
        oranges[i]+=b;
    }
    int countA=0,countB=0;
    for(int i=0;i<apples.size();i++){
        if(apples[i]>=s && apples[i]<=t) countA++;
    }
    for(int i=0;i<oranges.size();i++){
        if(oranges[i]>=s && oranges[i]<=t) countB++;
    }
    cout<<countA<<endl<<countB<<endl;
}
int main(){
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    //int apples[m], oranges[n];
    vector<int> apples(m), oranges(n);
    for(int i=0;i<m;i++){
        cin>>apples[i];
    }
    for(int i=0;i<n;i++){
        cin>>oranges[i];
    }
    countApplesAndOranges(s,t,a,b,apples,oranges);
    return 0;
}