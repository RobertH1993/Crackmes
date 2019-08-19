#include <stdio.h>
#include <string.h>


int main(int argc, char **argv){
  char username[32];
  printf("Insert a username: ");
  gets(username);

  char value = 5;
  char key[32] = "";
  for(int i = 0; i < strlen(username); i++){
    key[i] = username[i] | value;
    value = username[i];
  }

  printf("Key: %s\n", key);
  


  return 0;
}
