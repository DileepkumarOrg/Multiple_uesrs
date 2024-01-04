//delete end

     #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 	int data;
 	struct node *link;
 	
 };
 
 void delete_end(struct node *head);
 void display(struct node *head);
 
 int main()
 {
 	struct node *head=malloc(sizeof(struct node));
	head->data=15;
	head->link=NULL;
	
	
	struct node *second=malloc(sizeof(struct node));
	second->data=56;
	second->link=NULL;
	head->link=second;
	
	struct node *third=malloc(sizeof(struct node));
	third->data=63;
	third->link=NULL;
	second->link=third;
	
	struct node *fourth=malloc(sizeof(struct node));
	fourth->data=24;
	fourth->link=NULL;
	third->link=fourth;
	
	struct node *fifth=malloc(sizeof(struct node));
	fifth->data=35;
	fifth->link=NULL;
	fourth->link=fifth;
	
	struct node *sixth=malloc(sizeof(struct node));
	sixth->data=54;
	sixth->link=NULL;
	fifth->link=sixth;
	
	delete_end(head);
	display(head);
}


void delete_end(struct node *head)
{
	struct node *ptr1,*ptr2;
	ptr1=head;
	ptr2=head;
	while(ptr1->link!=NULL)
	{
		ptr2=ptr1;
		ptr1=ptr1->link;
		
	}
	
	ptr2->link=NULL;
	free(ptr1);
	ptr1=NULL;
	
	
}

 void display(struct node *head)
 {
 	struct node *ptr;
 	ptr=head;
	
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->link;
	}

 	
 }