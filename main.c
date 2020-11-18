#include <stdio.h>
#include <stdlib.h>

typedef char* string;
typedef struct US_City{

  string name;
  struct US_City* p;

} 
node;

int main(void) {
  printf("Hello America\n\n");

  /*

  Letter to Indexes
  
  a    b    c    d 
  00   01   02   03 
  e    f    g    h  
  04   05   06   07 
  i    j    k    l  
  08   09   10   11
  m    n    o    p  
  12   13   14   15
  q    r    s    t  
  16   17   18   19
  u    v    w    x  
  20   21   22   23
  y    z
  24   25


  */
  
  node* city[26];

///////////////////////////////////////////////
  
  //A
  node* Austin = malloc(sizeof(node));
  Austin->name = "Austin";
  city[1-1] = Austin;

  //B
  node* Boston = malloc(sizeof(node));
  Boston->name = "Boston";
  city[2-1] = Boston;

  //C
  node* Columbus = malloc(sizeof(node));
  Columbus->name = "Columbus";
  city[3-1] = Columbus;

  //D
  node* Denver = malloc(sizeof(node));
  Denver->name = "Denver";
  city[4-1] = Denver;

  //E
  node* Eugene = malloc(sizeof(node));
  Eugene->name = "Eugene";
  city[5-1] = Eugene;

  //F
  node* FairfaxCounty = malloc(sizeof(node));
  FairfaxCounty->name = "Fairfax County";
  city[6-1] = FairfaxCounty;

  //G
  node* Grapevine = malloc(sizeof(node));
  Grapevine->name = "Grapevine";
  city[7-1] = Grapevine;
  
  //H
  node* Honolulu = malloc(sizeof(node));
  Honolulu->name = "Honolulu";
  city[8-1] = Honolulu;

  //I
  node* Indianapolis = malloc(sizeof(node));
  Indianapolis->name = "Indianapolis";
  city[9-1] = Indianapolis;
  
  //J
  node* Juiter = malloc(sizeof(node));
  Juiter->name = "Juiter";
  city[10-1] = Juiter;

  //K
  node* KeyWest = malloc(sizeof(node));
  KeyWest->name = "Key West";
  city[11-1] = KeyWest;

  //L
  node* LosAngeles = malloc(sizeof(node));
  LosAngeles->name = "Los Angeles";
  city[12-1] = LosAngeles;

  //M
  node* Manhattan = malloc(sizeof(node));
  Manhattan->name = "Manhattan";
  city[13-1] = Manhattan;

  node* Merced = malloc(sizeof(node));
  Merced->name = "Merced";
  Manhattan->p = Merced;

  node* Minneapolis = malloc(sizeof(node));
  Minneapolis->name = "Minneapolis";
  Merced->p = Minneapolis;

  //N
  node* NewPort = malloc(sizeof(node));
  NewPort->name = "New Port";
  city[14-1] = NewPort;

  //P
  node* Philadelphia = malloc(sizeof(node));
  Philadelphia->name = "Philadelphia";
  city[15-1] = Philadelphia;

  //O
  node* Orlando = malloc(sizeof(node));
  Orlando->name = "Orlando";
  city[16-1] = Orlando;

  //Q
  node* QueenCity = malloc(sizeof(node));
  QueenCity->name = "Queen City";
  city[17-1] = QueenCity;

  //R
  node* Richmond = malloc(sizeof(node));
  Richmond->name = "Richmond";
  city[18-1] = Richmond;

  //S
  node* Seattle = malloc(sizeof(node));
  Seattle->name = "Seattle";
  city[19-1] = Seattle;

  //T
  node* TraverseCity = malloc(sizeof(node));
  TraverseCity->name = "Traverse City";
  city[20-1] = TraverseCity;

  //U
  node* Utiea = malloc(sizeof(node));
  Utiea->name = "Utiea";
  city[21-1] = Utiea;

  //V
  node* Vegas = malloc(sizeof(node));
  Vegas->name = "Vegas";
  city[22-1] = Vegas;

  //W
  node* Waikoloa = malloc(sizeof(node));
  Waikoloa->name = "Waikoloa";
  city[23-1] = Waikoloa;

  //X
  node* Xenia = malloc(sizeof(node));
  Xenia->name = "Xenia";
  city[24-1] = Xenia;

  //Y
  node* Yosemite = malloc(sizeof(node));
  Yosemite->name = "Yosemite";
  city[25-1] = Yosemite;

  //Z
  node* Zion = malloc(sizeof(node));
  Zion->name = "Zion";
  city[26-1] = Zion;

////////////////////////////////////////

   for(int i = 0; i < 26; i++){
     for(node* list = city[i]; list != NULL; list = list->p){
       printf("%s, ", list->name);
     }
     printf("\n");
   }

//link: https://kidsareatrip.com/see-usa-cities-z/


  return 0;
}