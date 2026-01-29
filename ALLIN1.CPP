#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"stack.h"
#include"queue.h"
#include"singlell.h"
#include"singcirc.h"
#include"binsrch.h"
#include"seqsrch.h"
#include"sorttech.h"
#include"array.h"
//declaration of code
void srch(void);

void main()
{
 int ch;
 clrscr();
 do
 {
  printf("\nWhat you would like to do?.. :\n");
  printf("\nPress <1> to PERFORM OPERATIONS ON ARRAY");
  printf("\nPress <2> to PERFORM OPERATIONS ON STACK");
  printf("\nPress <3> to PERFORM OPERATIONS ON QUEUE");
  printf("\nPress <4> to PERFORM OPERATIONS ON SINGLE LINKED LIST");
  printf("\nPress <5> to PERFORM OPERATIONS ON SINGLE CIRCULAR LINKED LIST");
  printf("\nPress <6> to PERFORM OPERATIONS ON DOUBLY LINKED LIST");
  printf("\nPress <7> to PERFORM OPERATIONS ON DOUBLY CIRCULAR LINKED LIST");
  printf("\nPress <8> to PERFORM SEARCHING OPERATIONS");
  printf("\nPress <9> to PERFORM SORTING OPERATIONS");
  printf("\nPress <0> to Exit");
  printf("\nEnter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
    arry();
    getch();
    clrscr();
    break;
   case 2:
    stk();
    getch();
    clrscr();
    break;
   case 3:
    que();
    getch();
    clrscr();
    break;
   case 4:
    singlell();
    getch();
    clrscr();
    break;
   case 5:
    singlecl();
    getch();
    clrscr();
    break;
   case 6:
    //AddPos();
    getch();
    clrscr();
    break;
   case 7:
    //delstart();
    getch();
    clrscr();
    break;
   case 8:
    srch();
    clrscr();
    break;
   case 9:
    sort();
    getch();
    clrscr();
    break;
   case 0:
    exit(0);
   default:
    printf("Enter a valid choice!");
    getch();
    clrscr();
    break;
  }
 }while(ch!=0);
 getch();
}

void srch(void)
{
 int cha;
 clrscr();
 do
 {
  printf("\nWhat kind of searching you want to do: \n");
  printf("\nPress <1> for Linear Search\n");
  printf("\nPress <2> for Binary Search(Only for Sorted data)\n");
  printf("\nPress <0> Exit\n");
  printf("\nEnter your choice: \n");
  scanf("%d",&cha);
  switch(cha)
  {
   case 1:
    lisrch();
    getch();
    clrscr();
    break;
   case 2:
    binsrch();
    getch();
    clrscr();
    break;
   case 0:
    break;
   default:
    printf("Enter Valid Choice..!!");
    getch();
    clrscr();
    break;
  }
 }while(cha!=0);
}