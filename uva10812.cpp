/*題意：解聯立方程式(a=x+y、g=x-y)

  球賽賭局，有總分和兩隊相差的分數

  求出兩隊分別得幾分，高分的顯示在前*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int l,a,g;
    int x,y;
    cin>>l;
    while(l--){
        cin>>a>>g;
        x=(a+g)/2;                          //解聯立方程式(a=x+y、g=x-y)
        y=(a-g)/2;
        if(x<0||y<0||a<0||g<0||(a+g)%2!=0)  //分數不可能為零、分數相加為奇數會算不出結果
            cout<<"impossible"<<endl;
        else
            cout<<x<< " "<<y<<endl;

    }
    return 0;
}
