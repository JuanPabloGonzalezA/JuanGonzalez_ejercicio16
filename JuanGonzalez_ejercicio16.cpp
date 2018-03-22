#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

void apuesta(int inicial, int* ii, int* max,int semilla);
int main(){
	int maxpersona;
	int tiempopersona;
	int j;
	for(j=0;j<100;j++){
		apuesta(100,&tiempopersona,&maxpersona,j);
		cout<<maxpersona<<"\t"<<tiempopersona<<endl;
	}
	return 0;
}

void apuesta(int inicial, int * ii, int * max, int semilla){
	int step;
	int i;
	int maximo;
	maximo=0;
	i=0;
	maximo=0;
	srand(semilla);
	while(inicial>0){
		step=rand()%3 -1;
		inicial += step;
		i++;
		if(inicial>maximo){
			maximo=inicial;		
		}
	}
	*ii=i-1;
	*max=maximo;
}
