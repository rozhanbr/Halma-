#include<stdio.h>
// this function recieves the state of border and prints it

int main(){
	printf("\n\n\n\n");
    printf("             ");
    for(int h=1;h<=10;h++){
    	printf("  %d  ",h);
	}
	printf("\n");
    int i=1; 
	for(int row=0;row<21;row++){
	    if(row%2==0){
		printf("             ==========");
		i--;}
		else{
		if(i<10) printf("            %d",i);
		else printf("           %d",i);}
		for(int column=0;column<21;column++){
			
			if(row%2==0) {
			printf("==");}
			else{
				if(column%2==0) {
				 printf("||");}
				else{
					 printf("   ");
				
				}
			}
		}
		printf("\n");
		i++;
	}
}
