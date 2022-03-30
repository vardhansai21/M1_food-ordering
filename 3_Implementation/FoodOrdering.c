#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


struct food
{
	char name[40];
    int id;
	int cost;
};

struct order
{
    struct food item;
    int tableno;
};

struct food arr[20];
int total_dishes=-1;


struct QNode
{
	struct order key;
	struct QNode *next;
};

struct LList
{
struct QNode *front, *rear;
};

struct QNode* newNode(struct order k) 
{ 
    struct QNode *temp = (struct QNode*)malloc(sizeof(struct QNode)); 
    temp->key = k; 
    temp->next = NULL; 
    return temp;  
} 

struct LList *createLList() 
{ 
    struct LList *q = (struct LList*)malloc(sizeof(struct LList)); 
    q->front = q->rear = NULL; 
    return q; 
} 
  
void enLList(struct LList *q, struct order k) 
{ 
    struct QNode *temp = newNode(k); 
    if (q->rear == NULL) 
    { 
       q->front = q->rear = temp; 
       return; 
    } 
      q->rear->next = temp; 
    q->rear = temp; 
} 
  
struct order deLList(struct LList *q) 
{ 
    struct order neworder;
    if (q->front == NULL) 
       return neworder; 
      struct QNode *temp = q->front; 
    q->front = q->front->next; 
      if (q->front == NULL) 
       q->rear = NULL; 
    return temp->key; 
}
 
int empty(struct LList *q)
{
    if (q->front == NULL) 
        return 1;
    else return 0;
}

void clrscr()
{
    system("@cls||clear");
}

void admin(struct LList* q);
void admin_login(struct LList* q);
int main_scr(struct LList* q);
int main();


void display_list()
{
	clrscr();
	int i=0;
	printf("\n\n\n	Dish Menu:\n\n\n");
	for(i=0;i<=total_dishes;i++)
	{
		printf("\n Dish Unique ID: %d,\n Dish Name: %s,\n Cost: %d \n\n",arr[i].id,arr[i].name,arr[i].cost);
	}
	printf("\n\n\n\n\n");
    getch();
}

void admin_login(struct LList *q)
{
	char str[10];
	printf("Username:\n");
	scanf("%s",str);
	if(strcmp(str,"admin")==0)
	{
		printf("Password:\n");
		scanf("%s",str);
		if(strcmp(str,"admin")==0)
			{clrscr();admin(q);}
		else
		{clrscr();admin_login(q);}
	}
	else{
		clrscr();admin_login(q);
	}
}

void admin(struct LList *q)
{
	int ch,ch2;struct food f;
	printf("	ADMIN PAGE:\n\n\n");
	printf(" 1. Add a Food Item to Food Menu\n");
	printf(" 2. View Food Menu\n");
    printf(" 3. Register New Order\n");
	printf(" 4. View And Finish All Pending Orders\n");
	printf(" 5. Exit\n Enter a choice:\n");
	scanf("%d",&ch);printf("\n\n");
	switch(ch)
	{
		case 1:
        //struct food f;
        printf("Enter the dish name(refrain from using spaces):");
		scanf("%s",f.name);
		printf("Enter the dish cost(refrain from using spaces):");
		scanf("%d",&f.cost);
        f.id = ++total_dishes;
		arr[total_dishes]=f;
		clrscr();admin(q);
		break;
		
		case 2:
		display_list();
        clrscr();
        admin(q);
		break;
		
		case 3:
        printf("Enter the dish ID(refrain from using spaces):");
		scanf("%d",&ch);
        if(ch<0 || ch>total_dishes)
        {
            printf("No such id exists. Try Again\n\n");
            getch();
            clrscr();
            admin(q);
        }
        else
        {
            printf("Enter the table number(refrain from using spaces):");
            scanf("%d",&ch2);
        }
        struct order neworder;
        neworder.item = arr[ch];
        neworder.tableno = ch2;
        enLList(q,neworder);
        clrscr();
        admin(q);
		break;
		
        case 4:
        if(empty(q)==0)
        {
            //clrscr();
            while(empty(q)!=1)
            {
                struct order nextorder = deLList(q);
                printf("NEXT ORDER : FOOD ITEM NAME : %s, FOOD COST : %d, TABLE NUMBER : %d\n\n",nextorder.item.name,nextorder.item.cost,nextorder.tableno);
            }getch();
            clrscr();
            admin(q);
        }
        else
        {
            printf("WE CURRENTLY HAVE NO PENDING ORDERS");
            getch();
            clrscr();
            admin(q);
        }
        break;
		
		case 5:
		exit(0);
		
		default:
		printf("Wrong Choice \n");
        getch();
        clrscr();admin(q);
		break;
	}
}



int main()
{
	struct LList *q = createLList();
    admin_login(q);
}
