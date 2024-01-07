// https://leetcode.com/problems/generate-parentheses/
# include<iostream>
# include <vector>
using namespace std;


void para(int n,int left,int right,vector<string> &ans, string&temp){

if(left+right==2*n){
    ans.push_back(temp);
    return;
}



// left
if(left<n){
    temp.push_back('(');
para(n,left+1,right,ans,temp);
temp.pop_back(); // vapas jne ke liye hatna pdega isliye pop kiya.

}
//right
if(right<left){
     temp.push_back(')');
para(n,left,right+1,ans,temp);
temp.pop_back();

}





}

int main(){
    vector<string>ans; 
      
string temp;
      para(3,0,0,ans,temp);
      for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
      }
}
