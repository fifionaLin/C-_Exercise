/*題意：

給一數N，求出任由 1至 N的所有組合最大公因數之總和G*/


#include <iostream>
using namespace std;

int gcd(int x,int y){             //輾轉相除法求最大公因數
    if(x<y){
        int tmp=x;
        x=y;
        y=tmp;
    }
    if(y==0) return x;        //輾轉相除法
    else return gcd(y,x%y);
}


int main(){
  int ans[502]={0};                 //先建立陣列，初始化所有值為0
  for (int i=1;i<502;i++){          //先選出i
    ans[i]=ans[i-1];                //讓ans[i-1]，以便對齊最後的cin值
    for (int j=1;j<i;j++){          //在將i跟j迴圈做輾轉相除
      ans[i]=ans[i]+gcd(i,j);
    }
  }
  int d;
  while(cin>>d && d!=0){                 //d=0為第一項
    cout<<ans[d]<<endl;
  }
  return 0;
}
