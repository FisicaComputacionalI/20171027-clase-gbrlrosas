//uno si es primo y 0 si no
//TAREA
//primera parte
#include<iostream>
using namespace std;
int esprimo(int x){
  int flag=0;
  for(int i=2;2<=x/2;i++){
    if(x%i==0){flag=1;} return flag;
  }}

int main(){
int p=8;
cout<<"introduce un numero "<<endl;
cin>>p;
do{
  if(p%2==0)
      p=p+1;
  if(esprimo(p)==1)
      p=p+2;
 }while(esprimo(p)==1)
  {cout<<"el numero es "<<p<<endl;}
return 0;
}
