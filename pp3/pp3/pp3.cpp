// pp3.cpp: определяет точку входа для консольного приложения.
//

#include <stdafx.h>
#include <iostream>

using namespace std;
struct LIBRARY
{
	char number[20];
	char FIO[30];
	char name[30];
	int year;
	int kolvo;
};

struct ITEM
{
	LIBRARY *Library;
	ITEM *next;
};

ITEM * create(LIBRARY * Library) 
{
   ITEM *head=new ITEM;
   head->Library=Library;
   head->next=NULL;
   return head;
}

void add(LIBRARY *Library, ITEM* head)
{
	while (head->next)
		head=head->next;
	head->next=new ITEM;
	head->next->Library=Library;
	head->next->next=NULL;
	cout<<endl;
}

LIBRARY *make() 
{
    LIBRARY *Library=new LIBRARY;
        
    cout<<"Enter book nomer: ";
    cin.getline(Library->number,30);
 
    cout<<"Enter FIO: ";
    cin.getline(Library->FIO,30);
 
    cout<<"Enter book name: ";
    cin.getline(Library->name,40);
 
    cout<<"Enter made year: ";
    cin>>Library->year;
 
    cout<<"Enter count of books: ";
    cin>>Library->kolvo;
 
    return Library;
}
void printLIBRARY(LIBRARY *Library) //вывод на экран  
{
     
    cout<<"Number of book => "<<Library->number<<endl;
    cout<<"FIO => "<<Library->FIO<<endl;
    cout<<"Name of book => "<<Library->name<<endl;
    cout<<"Year => "<<Library->year<<endl;
    cout<<"Count of book => "<<Library->kolvo<<endl;    
    cout<<endl;
}

ITEM* remove(ITEM *str)
{
	ITEM *tail=str, *head=str;
	char nomer[30];
	cout<<"Enter name of book"<<endl;
	cin.getline(nomer, 30);
	while(head)
	{
		if (!strcmp(nomer, head->Library->name))
		{
			head->Library=NULL;
			if (tail==head)
				str=head->next;
			tail->next=head->next;
			tail = head;
			head=head->next;
		}
		else head=head->next;
	}
	cout<<"Information about book deleted"<<endl;
	return str;
}

int choice()
{
	int answer;
	cout<<"Add new books - enter 1"<<endl;
    cout<<"Print LIBRARY - enter 2"<<endl;
    cout<<"Delete book - enter 3"<<endl;
    cout<<"Exit - enter 4"<<endl<<endl;
    cout<<"Enter your choice: ";
	cin>>answer;
    if(answer>=1 && answer<=5)
      return answer;
    else
      return 0;
}

int main()
{
	ITEM *head=NULL;
	int ch;
	while(1)
	{
		ch=choice();
		if (ch==1)
		{
			cout<<endl;
			
			if(head==NULL)
				head=create(make());
			else
				add(make(),head);
		}
		else if (ch==2)
		{
           cout<<endl;
           int i=0;
           int N=0;
           
           ITEM *phead=head;
           while (head)
           {
               N++;
               head=head->next;
           }
 
           LIBRARY *buf;
           LIBRARY **pLibrary=new LIBRARY*[N];
           head=phead;
           
           while (head)
           {
                   pLibrary[i]=head->Library;
                   head=head->next;
                   i++;
               }
 
           head=phead;
             for (i=0;i<N;i++)
                   printLIBRARY(pLibrary[i]);   
       }
		else if (ch==3)
		{
			head=remove(head);
		}
		else if (ch==4)
		{
			break;
			cout<<endl;
		}
		
		}
		return 0;
	}