#include<bits/stdc++.h>
using namespace std;
int main(){
	int cot=0;
    for(int p=2;p<=4;p++)
    	for(int q=p;q<=(3/(1-1.0/p));q++)
		   if(1-1.0/p-1.0/q>1e-9){
             for(int r=q;r<=(2/(1-1.0/p-1.0/q));r++){
                    if(1-1.0/p-1.0/q-1.0/r>1e-9 && 1/(1-1.0/p-1.0/q-1.0/r)-round(1/(1-1.0/p-1.0/q-1.0/r))<1e-9){
    	   	         	cot++;
    	   	         	cout<<"solution:("<<p<<","<<q<<","<<r<<","<<round(1/(1-1.0/p-1.0/q-1.0/r))<<")"<<endl;
		            }
				    //cout<<1-1.0/p-1.0/q-1.0/r<<" ";
			 }
	}
	cout<<cot<<"  intrger solutions";
    return 0;
}