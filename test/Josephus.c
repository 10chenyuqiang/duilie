#include "Josephus.h"

void CreatList(){
    node *p, *q, *r;
    p = q = (node*)malloc(sizeof(node));                                             
    p -> no = 1;
    for (int i=2; i<=n; i++){
        r = (node*)malloc(sizeof(node));
        r ->no = i;
        q->next = r;
        q = r;
    }
    q ->next= p;
     q = p;
return ;

}

void Delect()
{   node *p, *q;
	int k = 0;
	 while (q->next !=q){
         k++;
         if (k == m){
             p->next = q->next;
             free(q);
             q = p->next;
             k = 0;
         }else{
             p = q;
             q = q->next;
         }
     }


}

void Print(){
	 node *q;
	 printf("最后一个获胜者编号是: %d\n", q->no+1);
}
