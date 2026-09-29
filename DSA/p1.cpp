//WAP to perform stack operation (array immplementation)
#include<stdio.h>
#define N 5
main(){
	struct stk{
		int stack[N];
		int top;
	};
	struct stk s;
	int ch=0, item,i;
	s.top=-1;	
	while(ch!=4){
		printf("1->Push\n");
		printf("2->Pop\n");
		printf("3->Traverse\n");
		printf("4->Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(s.top==N-1){
					printf("Overflow\n");
				}else{
					s.top=s.top+1;
					printf("Enter element to insert :");
					scanf("%d",&item);
					s.stack[s.top]=item; 
				}
			break;
			case 2:
				if(s.top==-1){
					printf("Underflow\n");
				}else{
					item= s.stack[s.top];
					printf("Item deleted=%d\n",item);
					s.top=s.top-1;	
				}
			break;
			case 3:
				if(s.top==-1){
					printf("Stack is Empty\n");
				}
				else{
					for(i=s.top;i>=0;i--){
						printf("%d",s.stack[i]);
					}
				}
			break;
			case 4:
				printf("Exit......\n");
			break;
		}
	}
}