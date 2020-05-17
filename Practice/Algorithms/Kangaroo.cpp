#include<iostream>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2){
    if((x2>x1 && v2>v1) || (x2>x1 && v2==v1)) return "NO";
    int j = (x2-x1)%(v1-v2);
    if(j==0) return "YES";
    return "NO";
}

int main(int argc, char const *argv[])
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    string result = kangaroo(x1,v1,x2,v2);
    cout<<result<<endl;
    return 0;
}

