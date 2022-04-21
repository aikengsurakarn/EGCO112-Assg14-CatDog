#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(int x){
      size=x;
      next=NULL;
      cout<<"adding "<< x<<endl;
}
  NODE:: ~NODE(){
      cout<<"Node "<<size<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Node size:"<<size<<endl;
 }
void NODE::insert(NODE*& x){
     x->next=this;

     }

void NODE::survive()
{
  size = 0;
}