#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c,int *d){
    int N[4] = {};
    int i = rand()%4;
    N[i]=50;
    do{i = rand()%4;}while(N[i]!=0);
    N[i]=100;
    do{i = rand()%4;}while(N[i]!=0);
    N[i]=500;
    do{i = rand()%4;}while(N[i]!=0);
    N[i]=1000;
    *a=N[0];
    *b=N[1];
    *c=N[2];
    *d=N[3];
    
}
