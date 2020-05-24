#include <iostream>
#include <math.h>

using namespace std;

bool check(int val){
    if (val>=4){
        int val1 = sqrt(val);
        for(int i=2; i<=val1; i++){
            if(val%i == 0)
                return false;
        }
    }
    return true;

}


int main(){
    int n1,n2;
    cin>>n1>>n2;
    for (int i=n1; i<=n2; i++){
        if(check(i))
            cout<<i<<"          ";
    }

    return 0;
}
