#include<iostream>
#include<vector>
using namespace std;
vector<int> gradingStudents(vector<int> grades) {
    for(int i=0;i<grades.size();i++){
        if(grades[i]<38){
            continue;
        }
        int n = grades[i]%10;
        if(n==3 || n==8) grades[i]+=2;
        else if(n==4 || n==9) grades[i]+=1;
    }
    return grades;
}
int main(){
    int n;
    cin>>n;
    vector<int> grades(n);
    for(int i=0;i<n;i++) cin>>grades[i];
    grades = gradingStudents(grades);
    for(int i=0;i<n;i++){
        cout<<grades[i]<<endl;
    }
    
    return 0;
}