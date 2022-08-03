/*題意：

算該數字的二進位有幾個1

再分別算該數字裡每個位數的二進位有幾個1

ex、

M=63 ，二進位 = 111111      共6個

6的二進位110，3的二進位11  共4個*/

#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    int b1=0,b2=0;
    int m;
    cin>>m;
    for(int v=m;v;v=v/2)       //將m的值賦給v，v每迴圈一次除以2
      b1=v%2+b1;               //除以2若餘1就加在b1上
    for(int w=m;w;w=w/10){     //將m的值賦給w，w每迴圈一次除以10
      for(int v=w%10;v;v=v/2)  //將除以10的餘數賦給v，v每迴圈一次除以2
        b2=v%2+b2;             //除以2若餘1就加在b1上
    }
    cout<<b1<<" "<<b2<<endl;
  }
  return 0;
}
