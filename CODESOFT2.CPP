#include<bits/stdc++.h>
#include<ctime>
#include<cstdlib>
using namespace std;
main(){
	int n;
srand(time(0));
	int m=rand() % 100+1;
	cout<<"enter any number";
    cin>>n;
while(true){
    if(n==m){
	cout<<"you are correct";
	cin>>n;
	  }
  else if(n>m){
	cout<<"enter smaller number"<<endl;
	cin>>n;
		    }
 else{	
     cout<<"enter largest number"<<endl;
     cin>>n;
}
}
}

