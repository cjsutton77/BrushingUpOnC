#include <stdio.h>

int main(int argc, char* argv[]){
	enum company {Google, Shell, Exxon, Total, Yahoo, Microsoft,
					Chevron, Facebook, Twitter, Uber};
					
	//int num_of_companies = sizeof(company)/sizeof(int);
	//printf("Number of companies is %d\n", num_of_companies);
	
	for (int i=Google ; i < Uber ; i++) {
			printf("%d\n",i);
		}
	return 0;
	}
