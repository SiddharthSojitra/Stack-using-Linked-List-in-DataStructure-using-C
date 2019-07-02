typedef struct Node
{
	int data;
	struct Node *ptr;
}NODE;

NODE *createNode()
{
	NODE *n = (NODE*)malloc(sizeof(NODE));
	n->data = NULL;
	n->ptr = NULL;

	return n;
}

NODE *insertfirst(NODE *head, int val)
{
	NODE *n = createNode();
	n->data = val;
	n->ptr = head;
	head = n;
	printf("\n %d is Inserted \n",val);

	return head;
}

void display(NODE *head)
{
	NODE *tr=head;
	if(tr==NULL)
	{
		printf("\n Link List is EMPTY");
	}
	else
	{
        printf("\n");
		while(tr!=NULL)
		{
			printf("%d_",tr->data);
			tr = tr->ptr;
		}
		printf("\n");
	}
}

void peep(NODE *head)
{
	NODE *tr=head;
    /*int val=NULL;
    if(tr == NULL)
    {
        printf("\n STACK IS EMPTY");
    }
    else
    {
		while(tr->ptr != NULL && tr != head)
		{
			tr = tr->ptr;
		}
		printf("%d",tr->data);
    }
    return val;*/

	printf("%d",head->data);
	return head;
}

NODE *insertpos(NODE *head,int pos, int val)
{
	int j=1;
    NODE *tr = head;
    if (pos == 1)
	{
        	head->data=val;
	}
	else
	{
		while (j < pos && tr != NULL)
	        {
				tr = tr->ptr;
        		j++;
        	}
	        if(tr == NULL)
        	{
        		printf("INVALID POSITION/n");
        	}
	        else
        	{
        		tr->data=val;
        	}
	}
   	printf("\n %d is Inserted \n",val);
	return head;
}

NODE *deletefirst(NODE *head)
{
	NODE* first = head;
	int val = NULL;
	if(head == NULL)
	{
		printf("\n Link List is Already EMPTY");
	}
	else
	{
		head = head->ptr;
		printf("\n %d is Deleted \n",first->data);
		free(first);
	}
	return head;
}
