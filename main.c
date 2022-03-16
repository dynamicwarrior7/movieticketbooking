#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
typedef struct
{
    int seat[100];
    int top;
}stack;
typedef struct node
{
    char m_time[50];
    int m_prize;
    struct node*next;
}NODE;
int a;
int password=6547;
int count=0;
NODE*addmovied(NODE*first)
{
  NODE*newnode,*temp;
  newnode=(NODE*)malloc(sizeof(NODE));
  printf("Enter the movie time :");
  scanf("%s",newnode->m_time);
  printf("\n Enter the movie price :");
  scanf("%d",&newnode->m_prize);
  count++;
  newnode->next=NULL;
  if(first==NULL)
    first=newnode;
  else{
    temp=first;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
  }
 return(first);


}
void push(stack*s,int a)
{
   s->seat[++s->top]=a;

}
void display(stack s)
{   printf("\n\t\t\t----------------------------\t\t\t\t\n");
    printf("\t\t\t\t  screen\t\t\t\t");
    printf("\n\t\t\t----------------------------\t\t\t\t\n");
   for(int i=1;i<=100;i++)
   {
       for(int j=0;j<=s.top;j++)
       if(i==s.seat[j])
       printf("@");
       printf("|_%d_|\t",i);
       if(i%10==0)
       printf("\n\n");

   }
}
void booking(stack *s)
{
   printf("enter the seat number\t:");
   scanf("%d",&a);
   for(int i=0;i<=s->top;i++)
   if(a==s->seat[i])
   { printf("\\\\Entered seat is already booked\\\\");
     a=0;
   }
   if(a>100)
   {printf("seat not available choose between 1-100");
    a=0;
   }


}
void total(stack *s)
{
     printf("\nseat numbers booked till now\n",s->seat[s->top]);
   for(int i=0;i<=s->top;i++)
    printf("%d\t",s->seat[i]);
}
void display2(NODE*first)
{
  if(first==NULL)
  { printf("list is empty");
    return;
  }
  else
  printf("\nmoviename\tmovietime\tticketprice\n");
  printf("\nMUGAN\t\t%s\t\t%d\n",first->m_time,first->m_prize);
  first=first->next;
   printf("\nRRR\t\t%s\t\t%d\n",first->m_time,first->m_prize);
  first=first->next;
  printf("\nKGF2\t\t%s\t\t%d\n",first->m_time,first->m_prize);
}

int main()
{ NODE*first=NULL;

  stack s1,s2,s3;
  int pass;
  s1.top=-1;
  s2.top=-1;
  s3.top=-1;
  int choice;

  while(1)
  { go:printf("\n\t\t\t\t\t........WELCOME TO OUR THEATER.........\t\t\t\t\t\n");
    printf(" 1:DEMON SLAYER MOVIE MUGAN TRAIN\n 2:RRR\n 3:KGF CHAPTER2\n 4:ALL MOVIE INFO\n 999:ADMIN MODE");
    printf("\n ENTER THE MOVIE FROM ABOVE MENU");
    scanf("%d",&choice);
    switch(choice)
   {
       case 1:printf("....BOOKING FOR MUGAN TRAIN MOVIE.....");
              int ch1;
              while(1)
   {
             printf("\n1:BOOK A SEAT\n2:SEATS BOOKED\n3:RETURN TO MAIN MENU\n");
             printf("Enter the choice:");
             scanf("%d",&ch1);
             switch(ch1)
     {
         case 1: display(s1);
                booking(&s1);
                if(a>0)
               { push(&s1,a);
                 printf("\n----------------------------------------------------------\n");
                  printf("\t\t\t\t\tBILL\t\t\t\t\t\n");
                  printf("-------------------------------------------------------------\n");
                  printf("MOVIE TIME :\t\t\t\t\t%s\n",first->m_time);
                  printf("-------------------------------------------------------------\n");
                  printf(" MOVIE TICKET PRICE :\t\t\t\t%d\n",first->m_prize);
               }
                break;
         case 2:total(&s1);
                break;
        case  3: goto go;
                 break;
         default: exit(0);

     }
   }
              break;
       case 2 : printf(".....Booking for RRR movie....");
                int ch2;
                while(1)
   {
                printf("\n1:BOOK A SEAT\n2:SEATS BOOKED\n3:RETURN TO MAIN MENU\n");
                printf("Enter the choice");
                scanf("%d",&ch2);
                switch(ch2)
     {
         case 1:display(s2);
                booking(&s2);
                if(a>0)
                { push(&s2,a);
                  printf("\n----------------------------------------------------------\n");
                  printf("\t\t\t\t\tBILL\t\t\t\t\t\n");
                  printf("-------------------------------------------------------------\n");
                  printf("MOVIE TIME :\t\t\t\t\t%s\n",first->next->m_time);
                  printf("-------------------------------------------------------------\n");
                  printf(" MOVIE TICKET PRICE :\t\t\t\t%d\n",first->next->m_prize);
                }
                break;
         case 2:total(&s2);
                break;
         case 3:goto go;
                break;
         default: exit(0);

     }
   }
              break;
       case 3:printf("\xdb\xdb\xdb booking for KGF2 movie\xdb\xdb\xdb");
              int ch3;
              while(1)
   {
              printf("\n1:BOOK A SEAT\n2:SEATS BOOKED\n3:RETURN TO MAIN MENU\n");
             printf("Enter the choice");
             scanf("%d",&ch3);
             switch(ch3)
     {
         case 1:display(s3);
                booking(&s3);
                if(a>0)
               { push(&s3,a);
                printf("\n----------------------------------------------------------\n");
                  printf("\t\t\t\t\tBILL\t\t\t\t\t\n");
                  printf("-------------------------------------------------------------\n");
                  printf("MOVIE TIME :\t\t\t\t\t%s\n",first->next->next->m_time);
                  printf("-------------------------------------------------------------\n");
                  printf(" MOVIE TICKET PRICE :\t\t\t\t%d\n",first->next->next->m_prize);
               }
                break;
         case 2:total(&s3);
                break;
         case 3:goto go;
                break;
         default: exit(0);

     }
   }
            break;
       case 4:printf("the movie details are :");
               display2(first);
       case 999:printf("\n...welcome to admin.....\n");
                printf("Enter the password");
                scanf("%d",&pass);
                if(pass==password)
                { int ch4;
                  g1:while(1)
                  {printf("enter 1 for edit and any other key for exiting admin mode");
                  scanf("%d",&ch4);
                  switch(ch4)
                 {
                     case 1: for(int i=0;i<3;i++)
                             first=addmovied(first);
                              break;

                     default: goto go;
                              break;

                 }
                }
                }
                 else
                 break;
       default:exit(0);
  }
  }
  return(0);
}

