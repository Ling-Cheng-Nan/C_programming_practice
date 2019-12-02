#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

typedef struct server{
	int id;
	char admin[12];
	char name[20];	
} Server;

struct Students{
	char name[20];
	int age;
	char address[100];
};


int main(void){
	
	/*struct declaration in the main function*/
	struct Books{
		char title[50];
		char author[50];
		char subject[100];
		int book_id;
	} book1;
	
	/*struct variables declare here...*/
	struct Students stu1;
	struct Books book2;
	Server server1, server2;
	
	//initialize server1 and server2
	server1.id = 104;
	server2.id = 112;
	strcpy(server1.name, "server I");
	strcpy(server1.admin, "Sam");
	strcpy(server2.name, "server II");
	strcpy(server2.admin, "Janus");
	
	//initialize stu1
	strcpy(stu1.name,"Ray");
	
	//initialize book1 and book2
	strcpy(book1.title, "Algorithm");
	strcpy(book2.title, "Operating System");
	
	//initialize server1 and server2
	printf("server name : %s \nserver-id : %d \nadministrator is : %s\n", server1.name, server1.id, server1.admin);
	printf("server name : %s \nserver-id : %d \nadministrator is : %s\n", server2.name, server2.id, server2.admin);
	
	printf("%s\n", book1.title);
	printf("%s\n", book2.title);
	printf("%s\n", stu1.name);
	
	return 0;
}
