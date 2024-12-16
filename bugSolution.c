int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d", x); // Output: 20

  //More robust example to illustrate potential problems
  int *dynamicPtr = (int *) malloc(sizeof(int)); //allocate memory
  if(dynamicPtr == NULL) { //check if memory allocation was successful
     fprintf(stderr, "Memory allocation failed\n");
     return 1; //Error handling
  }
  *dynamicPtr = 30;
  printf("%d", *dynamicPtr); //output: 30
  free(dynamicPtr); //Release allocated memory
  dynamicPtr = NULL; //Set pointer to null to avoid dangling pointers
  return 0; }