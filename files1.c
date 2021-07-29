#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LINE_SIZE 10


int min(char *f)
{
/*	void read_ints(const char* filename)
	{
		FILE* file = fopen(file_name, "r");
		int i = 0;

		fscanf(file, "%d", &i);
		while(!feof(file))
		{
			printf("%d", i);
			fscanf(file, "%d", &i);
		}
		fclose(file);
	}
	read_ints("num.txt");*/
	FILE* fp = fopen(f, "r");
	char buf[MAX_LINE_SIZE];
	int lineCounter =0;
	//printf("%s\n", fgets(buf, 100, fp));
	/*char* tok0 = strtok(fgets(buf, 100, fp), " ");
	int fir = atoi(tok0);
	int j =1;
	while(j< 100)
	{
		char* toki = strtok(NULL, " ");
		printf("I work %s\n", toki);
		j++;
		if(toki == NULL)
		{
			break;
		}
		int a = atoi(toki);
		printf("I work too %d\n", a);
		if(a > fir)
		{
			fir = a;
		}
	}*/	


	//printf("a= %d\n", fir);
	int i =0;
	char* tok0 =strtok(fgets(buf, 100, fp)," ");
	int b = atoi(tok0);
	printf("Works %d\n", b);
	while( fgets(buf, MAX_LINE_SIZE, fp))
	{
		printf("Line #%d: %s", lineCounter, buf);
		lineCounter+= 1;
		char* toki = strtok(buf, " ");
		int a = atoi(toki);
		printf("Num is: %d\n", a);
		if(a > b)
		{
			b =a;
		}
		/*
		while(i< 2)
		{
			char* toki = strtok(NULL, " ");
			printf("I work %s\n", toki);
			//i++;
			if(toki == NULL)
			{
				break;
			}
			int a = atoi(toki);
			printf("I work too %d\n", a);
			if(a > fir)
			{
				fir = a;
			}
		}*/	
	}
	printf("The highest number is: %d\n", b);
	//printf("%d\n",fir);
	fclose(fp);
	return 0;



/*

	FILE* fp = fopen("values.txt", "r");
	int x, numRead;
	float y;
	char z, buf[MAX_LINE_SIZE];
	numRead = fscanf(fp, "%d %s %f", &x, buf, &y);
	printf("numRead: %d\n", numRead);
	printf("x: %d\n", x);
	if(x> y)
	{
		printf("I'm bigger\n");
	}
	printf("buf: %s\n", buf);
	printf("y: %f\n", y);
	printf("===\n");
	//
	//
	//
	numRead = fscanf(fp, "%c", &z);
	printf("numRead: %d\n", numRead);
	printf("z: %c\n", z);
	printf("===\n");
	numRead = fscanf(fp, "%s", buf);
	printf("numRead: %d\n", numRead);
	printf("buf: %s\n", buf);
	printf("===\n");
	//
	//
	numRead = fscanf(fp, " %c %d ", &z, &x);
	printf("numRead: %d\n", numRead);
	printf("z: %c\n", z);
	printf("x: %d\n", x);
	printf("===\n");
	//
	//
	//
	//
	//
	//
	numRead = fscanf(fp, "%d", &x);
	printf("numRead: %d\n", numRead);
	fclose(fp);
	return 0;*/
}


int main()
{
	min("values.txt");
}
