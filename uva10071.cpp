/*題意：

某一個粒子有一初速度和等加速度。假設在 t 秒後此粒子的速度為 v ，請問這個粒子在 2t 秒後所經過的位移是多少。*/

#include <iostream>
using namespace std;

int main(){
  int v,t;           //第t秒後的速度為v，t為秒數
  while(cin>>v>>t)
  cout<<2*v*t<<endl; //據公式推算，第2t秒位移為 " 2*第t秒速度*t "
  return 0;
}
