/*題意:輸入兩字串a、b，把兩字串擁有相同的單字印出來，並從a到z排列，若沒有該字元則跳過

  1.統計兩個字串所有a至z字元個數

  2.按照a至z的順序，印出字元(若count_a[i]=0就不會印出任何字元)

  3.處理玩一組測資則換行*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s1,s2;
    while(getline(cin,s1)){
        getline(cin,s2);
        string ans = "";
        for(int i=0;i<s1.length();i++){
            for(int j=0;j<s2.length();j++){
                if(s1[i]==s2[j]){
                    ans = ans + s1[i];
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end(),less<char>());
        cout<<ans<<endl;
    }

    return 0;
}
