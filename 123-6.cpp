#include<stdio.h>
#include<stdlib.h>
#include<string>
typedef struct res{
	int no;
	char mystring[15];
	}res;

void add(res *p){
	p->no++;
	printf("enter add %d=",p->no);
	scanf("%14s",&p->mystring);
	printf("%s\n",p->mystring);
    *p++;
    return;
 
}
void del(res *p){
	int n;
	printf("enter del :");
	scanf("%d",&n);
	while(1){
		if(n==p->no-1){
			p->mystring[15]=NULL;
			printf("·F§ä¨ì§A¤Fóø");
			return;
		}
		else *p++;
    }
}

void lib(res *p){
	while(1){
		if(p->no==NULL)break;
		printf("no%d : %14s\n",p->no,p->mystring);
		*p--;
	}
}

int main(){
    int i,a=1;
    res *p,z;
    p=(res*)malloc(sizeof(res));
    z=*p;
    p->no=0;	
	while(a){
		printf("1:add  2:delete  3:lib  -1exit\n");
	    scanf("%d", &i);
	    switch(i){
		    case 1:
		    	add(p);
				break;
		    case 2:
		    	*p=z;
			    del(p);
		        break;
		    case 3:
		    	lib(p);
				break;
			case -1:
				a=0;
				break;
	    }
    }
	
}
