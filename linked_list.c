#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;    
};
struct node *start = NULL;
int count=0;
void insert_at_end(int x){
    struct node *temp,*stemp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp ->data = x;
    count++;
    if(start==NULL){
        start = temp;
        start -> next = NULL;
        return;
    }
    stemp = start;
    while(stemp -> next != NULL){
        stemp = temp -> next;
    } 
    stemp -> next = temp;
    temp -> next = NULL;
}
void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  printf("There are %d elements in linked list.\n", count);

  while (t->next != NULL) {
    printf("%d\n", t->data);
    t = t->next;
  }
  printf("%d\n", t->data); // Print last node
}

void main(){
insert_at_end(10);
insert_at_end(20);
traverse();

}


