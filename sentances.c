//
// A simple command line program to read in sentances,
// generate a ragged array where each word (space delimited) is
// commited to an element of the array and the length is recorded
//
// output each word on a seperate line
//

#include <stdio.h>
#define MAX_LEN 80

int main(void){
  // set up character array, it will be ragged
  char ch[MAX_LEN][MAX_LEN];
  // request STDIN input up to 80 characters
  printf("Input a sentance:\n"); 
  int len[MAX_LEN] = {0};
  int j = 0;
  int i = 0;

  while(1){
    ch[i][j] = getchar();
    if (ch[i][j] == ' '){
      len[i]= j+1;
      ch[i][j+1] = '\0';
      i++;
      j = 0;
    }
    else if ((ch[i][j] != '\n') && (ch[i][j] !=' ')) j++;
    else if (ch[i][j] == '\n'){ 
      ch[i][j] = '\0';
      len[i] = j+1;
      break;
    } 
    else ;
  }
  printf("\n");
  for (int q = 0; q <= i ; q++){
    // remove one character off length for null terminator
    printf("%s\t:\t%d\n",ch[q],len[q]-1);
  }

  printf("\n");

  return 0;
}
