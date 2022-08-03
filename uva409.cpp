/*題意:將句子改成由左至右，由下而上輸出，空格也算*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string s_arr[100];
    int l = 0, max_len = 0;
    while(getline(cin,s_arr[l])){
        if(s_arr[l].length()>max_len){
            max_len = s_arr[l].length();
        }
        cout<<max_len<<endl;
        l++;
    }
    
    for(int i=0;i<max_len;i++){
        for(int j=l-1;j>-1;j--){
            if(s_arr[j].length()-1>=i) cout<<s_arr[j][i];
        }
        cout<<endl;
    }

    return 0;
}
