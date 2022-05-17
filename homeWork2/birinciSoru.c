/* Klavyeden -1 girilene kadar verilen tek sayıları tek bağlı doğrusal bir listenin başına, verilen çift sayıları ise
listenin sonuna ekleyen programı yazınız. */

#include <stdio.h>
#include <stdlib.h>
struct node{
	int number;
	struct node *next;	
};

typedef struct node node;

int main(){
	int sayi,TekSayisi=0,CiftSayisi=0; 
	node *head,*p;
    node *head2,*q;
	
	while(1){
		
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		
		if(sayi == -1) 
        break;
		
		if(sayi%2!=0){
			
			if(TekSayisi==0){
				head=(node*)malloc(sizeof(node));
				p=head;
			}
            else{
				p->next=(node*)malloc(sizeof(node));
				p=p->next;			
			}
		
			p->number=sayi;
			TekSayisi++;
			p->next=NULL;				
		}
        else{ 
			
			if(CiftSayisi==0){
				head2=(node*)malloc(sizeof(node));
				q=head2;
			}
            else{
				q->next=(node*)malloc(sizeof(node));
				q=q->next;			
			}
		
			q->number=sayi;
			CiftSayisi++;
			q->next=NULL;			
		}
	}
	
	p->next=head2;
	p=head;
	
	while(p!=NULL){
		printf("%d  ",p->number);		
		p=p->next;
	}
	
    return 0;	
}