//DLL delete end

     #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 	int data;
 	struct node *prev;
 	struct node *next;
 };
 
 void delete_end(struct node *head);
 void display(struct node *head);
 
 int main()
 {
 	struct node *head=malloc(sizeof(struct node));
 	head->data=15;
 	head->prev=NULL;
 	head->next=NULL;
 	
 	struct node *second=malloc(sizeof(struct node));
 	second->data=56;
 	second->prev=head;
 	second->next=NULL;
 	head->next=second;
 	
 	struct node *third=malloc(sizeof(struct node));
 	third->data=63;
 	third->prev=second;
 	third->next=NULL;
 	second->next=third;
 	
 	struct node *fourth=malloc(sizeof(struct node));
 	fourth->data=24;
 	fourth->prev=third;
 	fourth->next=NULL;
 	third->next=fourth;
 	
 	struct node *fifth=malloc(sizeof(struct node));
 	fifth->data=35;
 	fifth->prev=fourth;
 	fifth->next=NULL;
 	fourth->next=fifth;
 	
 	struct node *sixth=malloc(sizeof(struct node));
 	sixth->data=54;
 	sixth->prev=fifth;
 	sixth->next=NULL;
 	fifth->next=sixth;
 	
 	delete_end(head);;
 	display(head);
 	
 	
 }
 
 void delete_end(struct node *head)
 {
 	struct node *ptr;
 	ptr=head;
 	while(ptr->next!=NULL)
 	{
 		ptr=ptr->next;
 		
	 }
	 ptr->prev->next=NULL;
	 free(ptr);
 }
 
 
 void display(struct node *head)
 {
 	 struct node *ptr;
 	 ptr=head;
 	 while(ptr!=NULL)
 	 {
 	 	printf("%d\t",ptr->data);
 	 	ptr=ptr->next;
	  }
 
 }