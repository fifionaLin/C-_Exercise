/*題意是要算出國家在資料裡出現在次數並計數*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string,int> count;
    map<string,int> ::iterator iter;
    string first_s;
    char other[76]={0};
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        cin >> first_s;
        count[first_s]++;
        cin.getline(other,76);
    }
    for(iter=count.begin();
            iter!=count.end();iter++){
        cout<<iter->first<<" ";
        cout<<iter->second<<endl;
    }
    return 0;
}
