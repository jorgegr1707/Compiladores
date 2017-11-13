#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node
{
    char tag[5]; 
    char data[100];
    struct Node *next;
    struct Node *previous;
}*head, *tail; 


void pusht(char *value)
{
     struct Node *var,*temp;
     var=(struct Node *)malloc(sizeof(struct Node));
             strncpy(var->tag, "type", sizeof ("type")+1);
             strncpy(var->data, value, sizeof (value));
     if(head==NULL)
     {
          head=var;
          head->previous=NULL;
          head->next=NULL;
          tail=head;
     }
     else
     {
         tail=head;
         while(tail!=NULL)
         {
             temp=tail;
             tail=tail->next;
         }
     tail=var;
     temp->next=tail;
     tail->previous=temp;
     tail->next=NULL;
     }
} 
  
int pop()
{
      struct Node *temp;
      temp=tail;
      if(temp->previous==NULL)
      {
           free(temp);
           head=NULL;
           tail=NULL;
           return 0;
      }
      printf("\nSe borro el siguiente dato: %s \n",tail->data);
      tail=temp->previous;
      tail->next=NULL;
      free(temp);
      return 0;
} 

void imprimir()
{
     struct Node *temp;
     temp=head;
     if(temp==NULL)
      {
         printf("List is Empty");
      }
     while(temp!=NULL)
     {

        printf("%s | %s -> ",temp->tag,temp->data);
        temp=temp->next;
     }
} 

int main()
{
    char token[4];
    strncpy(token, "int", 3);
    int value, i, loc;
    head=NULL;
    printf("Elija una opcion\n");
    printf("1.) Push\n");
    printf("2.) Pop\n");
    printf("3.) Mostar lista\n");
    printf("4.) Exit\n");
    while(1)
    {
          printf("\nEligir operacion: ");
          scanf("%d",&i);
          switch(i)
          {
                case 1:
                {
                    printf("Agregar valor ");
                    scanf("%d",&value);
                    pusht(token);
                    imprimir();
                    break;
                }
                case 2:
                {
                    pop();
                    imprimir();
                    break;   
                }
                case 3 :
                {
                    imprimir();
                    break;
                }
                case 4 :
                 {
                    exit(0);
                    break;
                 }
          }
    }
    printf("\n\n%s",tail->data);
    imprimir();
}
