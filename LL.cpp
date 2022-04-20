#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
        t->show_node();
	      t=t->move_next();    
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }

void LL::snap_finger(){
  int kill[100];
  int i,j;
  
  srand(time(NULL));

  for(i=0; i<(size/2); i++)
    {
      kill[i] = rand()%size + 1;
      for(j=0; j<i; j++)
        {
          while(kill[i]==kill[j])
            {
              kill[i] = rand()%size + 1;
            }
        }
    }
  
  for(i=0; i<(size/2); i++)
    {
      NODE* t=hol;
      if(t!=NULL)
      {
        for(j=0; j<kill[i]; j++)
          {
            if(j==kill[i]-1)
            {
              t->survive();
            }
            t = t->move_next();
          }
      }
    }
}