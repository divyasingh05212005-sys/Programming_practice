//WAP to insert a newnode after given node and travsers linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node * next;
};
node * start=NULL;
node * newnode;
node * ptr;
main(){
	int item, key, ch=0, f=0;
	while(ch!=4){
		printf("1-> Inserted as first node\n");
		printf("2-> Inserted after given node\n");
		printf("3-> Traversal of linked list\n");
		printf("4-> Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				newnode=(node*)malloc(sizeof(node));
				printf("Enter element :");
				scanf("%d",&item);
				newnode->data=item;
				newnode->next=start;
				start=newnode;
				break;
			case 2:
				if(start==NULL){
					printf("Firstly inert node as first node\n");
				}
				else{
					printf("Enter key value : ");
					scanf("%d",&key);
					ptr=start;
					while(ptr!=NULL){
						if(ptr->data==key){
							break;
						}
						else{
							ptr=ptr->next;
						}
					}
					if(ptr==NULL){
						printf("newnode can not be inserted\n");
					}
					else{
						newnode=(node*)malloc(sizeof(node));
						printf("Enter element :");
						scanf("%d",&item);
						newnode->data=item;
						newnode->next=ptr->next;
						ptr->next=newnode;
					}
					
				}
				break;
			case 3:
				if(start==NULL){
					printf("Linked list is empty\n");
				}
				else{
					printf("Elements of linked list\n");
					ptr=start;
					while(ptr!=NULL){
						printf("%d\n",ptr->data);
						ptr=ptr->next;
					}
				}
				break;
			case 4:
				printf("Exit..........\n");
				break;
			default:
				printf("Invailed choice\n");
				break;
		}
	}
}