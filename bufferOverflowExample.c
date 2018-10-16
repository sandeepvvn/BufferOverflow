#include <stdio.h>

/// The size is 10 i.e we can access the elem
struct User 
{ 
  int userId[10];
  int isValidUser;
};  
  
int main(void) {
  // We are creating the structure variable.
  struct User user;
  // Setting the value to 0.
  user.isValidUser=0;
  // Checking the value to make sure nothing happend.
  printf("Initial value of the user before buffer overflow %d",user.isValidUser);
  // Adding the element at 10 index i.e. adding the value at outside its bounds.
  user.userId[10]=1;
  // We just modified the value of userId but not the value of isValidUser value.
  printf("Value of the User after buffer overflow %d",user.isValidUser);
  return 0;
}
