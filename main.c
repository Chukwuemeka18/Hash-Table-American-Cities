#include <stdio.h>
#include <stdlib.h>

typedef char* string;
typedef struct US_City{

  string name;
  struct US_City* p;

} 
node;

int main(void) {
  printf("Hello America\n");

  /*

  a b c d 
  e f g h 
  i j k l
  m n o p
  q r s t 
  u v w x
  y z



  */
  node* city[26];

  node* Oakland = malloc(sizeof(node));
  Oakland->name = "Oakland";
  city[15-1] = Oakland;

  node* Merced = malloc(sizeof(node));
  Merced->name = "Merced";
  city[13-1] = Merced;

  node* NewYorkCity = malloc(sizeof(node));
  NewYorkCity->name = "New York City";
  city[25-1] = NewYorkCity;

  node* LA = malloc(sizeof(node));
  LA->name = "LA";
  city[12-1] = LA;

  node* Fork = malloc(sizeof(node));
  Fork->name = "Fork";
  city[6-1] = Fork;








  return 0;
}