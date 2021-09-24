#include<iostream>
using namespace std;
int main() {
	int num;
	cin>> num;
	int tem=num;
	int bin = 0;      // binary to decimal conversion
	int pv = 1;
	while(tem>0){
	    //int pv = 1;
	    int rem = tem%10;
	    tem = tem/10;
	    bin = bin+rem*pv;
	    //tem = tem/10;
	    pv= pv *2;
	    
	}
	cout<< bin;
}
	