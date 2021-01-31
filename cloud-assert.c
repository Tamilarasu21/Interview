//company name : Cloud Assert
//word count in c
#include<stdio.h>
#include<conio.h>
int main(){
  char w[100];
  int count=0;
  printf("Enter a word : \n");
  // get words with spaces
  scanf("%[^\n]s", &w);
  for(int i=0;w[i]!='\0';i++){
    //if there was one space count gets added
    //if there are two spaces it gets exited from if statement
    if(w[i]==' ' && w[i+1]!=' '){
      count++;
    }
  }
  printf("There are %d words", count+1);
  return 0;
}
