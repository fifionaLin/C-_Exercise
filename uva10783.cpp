/*題意:先輸入有幾組，再輸入兩數字，兩數之間的所有奇數，做等差數列相加，再用Case格式輸出*/

#include <iostream>
using namespace std;

int main(){
    int d,a,b,c,s; //d有幾筆資料,a、b為兩數字，c為項數，s為數列合
    int ans=0;     //幫case計數
    cin>>d;
    while(d--){
        cin>>a>>b;
        if(a%2==0)
            a++;
        if(b%2==0)
            b--;
        c = ((b-a)/2)+1;
        s =c*(a+b)/2;
        ans++;
        cout<<"Case "<<ans<<": "<<s<<endl;
    }
    return 0;
}
