/*題意是要算出 兩隊士兵人數的相差

  使用絕對值abs( ) ，先導入 <cstdlib>才能使用

  因為要2的32次方，所以要用long long才能儲存的下*/

#include<iostream>
#include<cstdlib>

using namespace std;

long long a,b;
int main(){

    while(cin>>a>>b){            //用迴圈的方式輸入每筆資料
        cout<<abs(a-b)<<endl;
    }
    return 0;
}
