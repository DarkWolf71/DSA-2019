#include <iostream>
#include <vector>
#include <climits>
#include <cfloat>
#include <iomanip>
using namespace std;

int main(){
	int number;
	cin>>number;
	int n;
	n=number;
	int *a=new int[number];
	int b=n*n-2*(n-1);
	for(int i=0; i<n;i++){
		a[i]=b--;
	}
	
	
	
	
	

	for(int j=0; j<(number/2+1); j++){
		for (int k=0; k<j; k++){
			cout<<++a[k]<<"     ";
		}
		int b=n*n-2*(n-1);
		for (int l=j; l<(number-j); l++){
			a[l]=b--;
			cout<<a[l]<<"     ";
		}
		for (int m=number-j; m<number; m++){
			cout<<--a[m]<<"     ";
		}
		n-=2;
		cout<<'\n'<<'\n';
	}


	for (int i=1;i<=number-(number/2)-1;i++){
		int j=0;
		for (; j<(number/2)  -i;j++){
			cout<<++a[j]<<"     ";
		}
		int b=a[j];
		for(;j< number/2 +1 +i; j++){
			cout<<++b<<"     ";
		}
		for(;j<number; j++){
			cout<<--a[j]<<"      ";
		}
		cout<<'\n'<<'\n';
	}
	
	delete []a;
	return 0;
}
