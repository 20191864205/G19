#include <stdio.h>
#include<math.h>

int main(int argc, char* argv[])

{
	
	double pi=0.0,i,n=1.0;
		while (n<1000000){
			

			i=1/pow(n,2);

			pi=pi+i;
			
			n=n+2;
		}

		pi=sqrt(8*pi);
		printf("pi=%10.8f\n",pi);
		return 0;
		
}
void pi4(){

	int i,j;
	double sum=1+1/3.0,pro=1/3.0,p;

	for(i=2,j=5;j<=999999;j+=2,i+=1){
	
	pro*=i/j;
	sum+=pro;
	}
	p=2.0*sum;
	printf("p=%10.8f\n",p);



}
void pi3()
{
	double pi=0.0,n=1.0,t=1.0;
	
	while(n<=100000){
	
		t=4*n*n/(4*n*n-1);

		pi=pi+t;

		n++;

	}
	pi=2*pi;

	printf("pi=%10.8f\n",pi);


}
void pi2(){
	int sign=1;

	double pi=0.0,n=1.0,term=1.0;

	while(fabs(term)>=1e-6){
	
		pi=pi+term;

		n=n+2;
		
		sign=-sign;
		
		term=sign/n;


	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);

}




void pi1()
{
	double pi=0.0,t=1.0,i=1.0;

	while(i>=1e-6){
	
		
		pi=pi+i;

		t++;
		
		i=1/pow(t,2);
	}
	pi=sqrt(6*pi);
	
	printf("pi=%10f\n",pi);

	
}