#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
  /*5
  enqueue(&headPtr,&tailPtr,5);
  enqueue(&headPtr,&tailPtr,6);
  enqueue(&headPtr,&tailPtr,7);
  printf("%d",dequeue(&headPtr,&tailPtr));
  printf("%d",dequeue(&headPtr,&tailPtr));
  printf("%d",dequeue(&headPtr,&tailPtr));
  */
/* For struct Queue
*/
  Queue  q;
  q. headPtr=NULL;
  q.tailPtr=NULL;
  q.size=0;
  int i,x;
enqueue_struct(&q,4);
x = dequeue_struct(&q);
printf("%d",x);
/*
 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue(&headPtr,&tailPtr);
            printf("dequeing %d\n",x);
        }
        else {
       enqueue_struct(&headPtr,&tailPtr, atoi(argv[i]));
           
        }
 }
  return 0;
*/
}
