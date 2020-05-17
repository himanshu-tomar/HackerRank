#include<iostream>
#include<vector>
using namespace std;
int getTotalX(vector<int> a, vector<int> b){
    int count=0,a_max = 1, b_min=100;
    for(int i=0;i<a.size();i++) if(a[i]>a_max) a_max = a[i];    //find max in a[]
    for(int i=0;i<b.size();i++) if(b[i]<b_min) b_min = b[i];    //find min in b[]
    bool flag = true;

    for(int i=a_max;i<=b_min;i++){
        flag = true;
        for(int j=0;j<a.size();j++) 
            if(i%a[j]!=0){ 
                flag = false; break;
            }
        if(!flag) continue;
        for(int j=0;j<b.size();j++)
            if(b[j]%i!=0){ 
                flag = false; break;
            }
        if(!flag) continue;

        count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i]; 

    int result = getTotalX(a,b);
    cout<<result<<endl;

    return 0;
}
