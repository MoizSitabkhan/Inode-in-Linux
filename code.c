#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	do
	{
		int c;
		char perm[]="file ";	
		char type[]="ls -l";
		char size[]="ls -sh";
		char inum[]="ls -i";
		char stat[]="stat ";
		printf("Enter the name of the file\n");
		scanf("%s",filename);
		strcat(perm,filename);
		strcat(size,filename);
		strcat(inum,filename);
		strcat(stat,filename);
		printf("FILE NAME:%s\n",filename);
		printf("FILE I-NODE NUMBER:\n");
		system(inum);
		printf("FILE PERMISSIONS:\n");
		system(perm);
		printf("FILE TYPE:\n");
		system(type);
		printf("FILE SIZE:\n");
		system(size);
		printf("FILE STATISTICS:\n");
		system(stat);
		printf("Press 1 to continue\n");
		printf("Press 0 to exit\n");
		scanf("%d",&c);
	}
	while(c==1);
}
