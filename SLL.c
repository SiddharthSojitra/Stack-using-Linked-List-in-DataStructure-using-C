
#include<stdio.h>
#include"SLL.h"

int main()
{
    int ch,val,pos;
	NODE *head=NULL;

    while(1)
    {
        printf("\n 1_PUSH");
        printf("\n 2_POP");
        printf("\n 3_PEEP");
        printf("\n 4_DISPLAY");
        printf("\n 5_CHANGE");
        printf("\n 0_EXIT");
        printf("\n Enter your choice__: ");

       scanf("%d",&ch);
      switch(ch)
        {
            case 0:
                    return 1;
                break;

            case 1 :
                    printf("\n Enter the value :");
                    scanf("%d",&val);
					head = insertfirst(head,val);
                break;

            case 2 :
                    head = deletefirst(head);
                break;

            case 3 :
					peep(head);
                break;

            case 4 :
                    display(head);
                break;

            case 5:
					printf("Enter the Position : ");
					scanf("%d",&pos);
					printf("Enter the value : ");
					scanf("%d",&val);
					head = insertpos(head,pos,val);
                break;

            default:
                    printf("\n PLEASE ENTER VALID OPTION__");
                break;
        }
    }
    return 0;
}
