#include<iostream>
using namespace std;
inline int MAXIMUM(int a,int b){
return(max(a,b));
}
inline int MINIMUM(int a,int b){
return(min(a,b));
}
int main(){
int x,y,z,max1,maxf,min1,minf,seclar;
cout<<"Enter three number: ";
cin>>x>>y>>z;
max1=MAXIMUM (x,y);
maxf=MAXIMUM (max1,z);
cout<<"The largest value is:"<<maxf<<"\n";
min1=MINIMUM(x,y);
minf=MINIMUM(min1,z);
cout<<"The smallest value is:"<<minf<<"\n";
seclar=(x+y+z)-maxf-minf;
cout<<"The second largest value is:"<<seclar;
}

