#include<iostream.h>
#include<conio.h>
#include<string.h>
int size;
void result();
void party_name();
struct evm
{
	char name[20];
	int vote;
};
struct evm stc[10];
void main()
{
	clrscr();
	int add;
	start:
	party_name();
	cout<<"\n\nenter new party name - ";
	cin>>stc[size].name;
	size++;
	party_name();
	cout<<"\n\nDo you want to add more party press 1\n";
	cout<<"press any key for voting page\nyour choice - ";
	cin>>add;
	switch(add)
	{
		case 1:
			goto start;
		default:
			goto next;
	}
	next:
	clrscr();
	party_name();
	cout<<"\npress "<<size+1<<" for result and exit";
	cout<<"\nenter your choice: ";
	cin>>add;
	if(add<=size)
		stc[add-1].vote++;
	if(add==size+1)
		goto end;
	goto next;
	end:
	party_name();
	result();
	getch();
}
void party_name()
{
	clrscr();
	if(size>0)
		cout<<"The entered parties are:-\n\n";
	for(int i=0;i<size;i++)
		cout<<i+1<<". "<<stc[i].name<<"\t\t"<<stc[i].vote<<endl;
}
void result()
{
	int i,win;
	win=stc[0].vote;
	for(i=0;i<size-1;i++)
		if(stc[i].vote<stc[i+1].vote)
			win=i+1;
	for(i=0;i<size;i++)
		if(stc[win].vote==stc[i].vote)
			cout<<"\nwinner is "<<stc[i].name<<" who have "<<stc[i].vote;
}