#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,p=0;
    cin>>n;
    int **a = new int *[n];
    for (int i=0; i<n; i++){
        a[i]=new int [n];
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>a[i][j];

        }
    }

    int temp, tmp1, r=0, c=0;
    for(int i=0; i<n; i++){
        for (int j=0; j<n-1; j++){
            if(a[i][j]>a[i][j+1]){
                r=i;
                c=j;
            }
            else{
                r=i;
                c=j+1;
            }
        }
        temp = a[r][c];
        tmp1 = 0;
        for (int j=0; j<n; j++){
            if(temp>=a[j][c]){
                tmp1++;
            }
        }
        if(tmp1 == n){
            p++;
            cout<<"a["<<r<<"]["<<c<<"] = "<< a[r][c]<<" is a saddle point"<<endl;
        }
    }
    if (p == 0)
        cout<<"There is no saddle point!"<<endl;
    return 0;
}
