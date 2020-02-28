#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

void randData(double *x,int y,int z){
for(int i=0;i<y*z;i++){
		*(x+i)=(rand()%101)/100.00;
}
} 

void showData(double *x,int y,int z){
for(int j=0;j<y*7;j+=7){
for(int i=0;i<z;i++){
	cout<< fixed <<setprecision(2);
	cout<<*(x+i+j)<<" ";
}cout<<endl;}
}

void findRowSum(double const *x,double *a,int y,int z){
double f=0;
for(int j=0;j<y*7;j+=7){
for(int i=0;i<z;i++){
	f+=*(x+i+j);
}a[j]=f;
f=0;}
}
