#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct Keys
{
	int left;
	int right;
	int up;
	int down;
	int quit;
};/*
struct Keys* createKeys(char left, char right, char up, char down, char quit)
{
	struct Keys* p = malloc(sizeof(struct Keys));
	//p->left = malloc((strlen(left)+1)*sizeof(char));
	//strcpy(p->left, left);
	//p->right = malloc((strlen(right)+1)*sizeof(char));
	//strcpy(p->right, right);
	//p->up = malloc((strlen(up)+1)*sizeof(char));
	//strcpy(p->up, up);
	p->left = left;
//	printf("%c %s\n", left, p->left);
	p->right = right;
	p->up = up;
	p->down = down;
	p->quit = quit;
//	printf("%c\n",p->quit);
	return p;
}*/
//Should print updates to the code
/*
char* arr(int l, int w)
{
	char arr[l+2][w+2];
	for(int i= 0; i<= l+1; i++)
	{
		for(int j =0; j<=w+1; j++)
		{
			if(i==0)
			{
				arr[i][j] = '*';
				continue;
						}
			if(j==0)
			{
				arr[i][j] = '*';
				continue;
			}
			if(i==l+1)
			{
				arr[i][j] = '*';
				continue;
			}

			if(j==w+1)
			{
				arr[i][j] = '*';
				//continue;
			}
			else
			{
				arr[i][j] =' ';
			}
		}
							}
	return arr;
}
char drawBuilding(int a, int b)
{
	for(int i =a; i< a+4; i++)
	{
		for(int j=b; j<b+6; j++)
		{
			if(i == a+2&& j == b+2)
			{
				arr[i][j]= '&';
			}

			if(i == a+2&& j == b+3)
			{
				arr[i][j]= '&';
			}
			if(i == a+3&& j == b+2)
			{
				arr[i][j]= '&';
			}
			if(i == a+3&& j == b+3)
			{
				arr[i][j]= '&';
			}
			else
			{
				arr[i][j] ='-';
			}

		}
	}
	return 1;
}*/

void Update(struct Keys* p, int s, int* a, int* b)
{
	if(s== p->left)
	{
		*b-=1;
	}

	if(s==p->right)
	{
		*b+=1;
	}
	if(s== p->up)
	{
		*a-=1;
	}
	if(s== p->down)
	{
		*a+=1;
	}

}
int playGame(const char* filename)
{
	int a,b,c,d;
	char l;
	int arr2[6];
	//struct Keys* p;
	FILE* fp = fopen(filename, "r");
	char buf[100];
	if(!fp)
	{
		fclose(fp);
		return 0;
	}
	int i =1;
	while(fgets(buf, 100, fp))
	{
		//char l,r,u,d,q;
	//	int c, d;
		if(i==1)
		{
			sscanf(buf, "%d %d", &a, &b);
			//I've gotten a and b. I think.
			//the building should look
			//like
			//drawBuilding(buil,a,b)
		}
	//	printf("I work\n");
		/*if(i==2)
		{
			numRead = fscanf(buf, "%c %c %c %c %c", &l,&r, &u, &d, &q);
			if(numRead == 5)
			{
				p = createKeys(l, r, u, d, q);
			}
			else
			{
				p=createKeys('a','d','w','s','q');
			//	break;
			}
		}
		else
		{
			fscanf(buf, "%c %d %d",&l, &c, &d);
		}*/
		//Something about the other codes

		i++;
	}
	fclose(fp);

	char arr[a+2][b+2];
	//Build. This should work hopefully.
	for(int i= 0; i<= a+1; i++)
        {
        	for(int j =0; j<=b+1; j++)
        	{
        		if(i==0)
        		{
        			arr[i][j] = '*';
        			continue;
        		}
        		if(j==0)
        		{
        			arr[i][j] = '*';
        			continue;
        		}
        		if(i==a+1)
        		{
        			arr[i][j] = '*';
        			continue;
        		}
        
        		if(j==b+1)
        		{
        			arr[i][j] = '*';
        			//continue;
        		}
        		else
        		{
        			arr[i][j] =' ';
        		}
        	}
        }
//	fclose(fp);
	int x=1;
	int items;
	char n;
	char p;
	int x1;
	int x2;
	char l1, r1, u1, d1, q1;
	//char l2, r2, u2, d2, q2;
	int numRead;
	FILE* fp1 = fopen(filename, "r");
	while(fgets(buf, 100, fp1))
	{
		x++;
		//printf("I work\n");
		if(x==3)
		{
			numRead = sscanf(buf, "%c %c %c %c %c", &l1, &r1, &u1, &d1, &q1);
		//	printf("l2: %c, r2: %c, u2: %c, d2: %c, q2: %c\n", l1, r1, u1, d1, q1);
			if(numRead == 5)
			{
				/*l1 =l2;
				r1 =r2;
				u1= u2;
				d1 =d2;
				q1 = q2;*/

				//struct Keys* p = createKeys(l1, r1, u1, d1, q1);
			}
			else
			{
				//p=createKeys('a','d','w','s','q');
				l1 = 'a';
				r1 = 'd';
				u1 = 'w';
				d1 = 's';
				q1 = 'q';
				//x+=1;
		//	break;
			}
		}
		if(x==4)
		{
			sscanf(buf, "%c %c %d %d", &n, &p, &x1, &x2);
			arr[x1+1][x2+1] = n;
		}
		else if(x>4)
		{
			sscanf(buf, "%c %d %d",&l, &c, &d);
			if(l=='B')
			{
				printf("I work\n");
				for(int i =c+1; i< c+5; i++)
				{
		        		for(int j=d+1; j<d+7; j++)
                        		{
                        			if(i == c+3&& j == d+3)
                        			{
                        				arr[i][j]= '&';
							continue;
                        			}
                        
                        			if(i == c+3 && j == d+4)
                        			{
                        				arr[i][j]= '&';
							continue;
                        			}
                        			if(i == c+4 && j == d+3)
                        			{
                        				arr[i][j]= '&';
							continue;
                        			}
                        			if(i == c+4&& j == d+4)
                        			{
                        				arr[i][j]= '&';
                        			}
						else
						{
							arr[i][j] ='-';
						}
			
					}
				} 
			}
			if(l== 'E')
			{	arr[c+1][d+1] ='X';
			}
			
			if(l== 'I')
			{ 	arr[c+1][d+1] ='$';
				items+=1;
			}
			if(l== 'P')
			{	arr[c+1][d+1] = '*';
			}                                              
		}

	}

	fclose(fp1);
	struct Keys p1 = {l1, r1, u1, d1, q1};
	printf("l: %c, r: %c, u: %c, d: %c, q: %c\n", l1, r1, u1, d1, q1);
	printf("l: %c\n", p1.left);	
	///struct Keys* p1 = createKeys(l1, r1, u1, d1, q1);
	//This should work. The top parts.
	//I made an Update variable.That should change x1 & x2 Update
	//AFter everything is done being built;
	// The loop
	//
	x1+=1;
	x2+=1;
	int lx = a+1;
	int ly = b+1;
	int score =0;
	do
	{
		char input;
		//int gone =1;
		int f1=x1;
		int f2= x2;
		printf("x1: %d, x2: %d\n", x1, x2);
		printf("Score: %d\n", score);
		printf("Items remaining: %d\n", items);
		for(int i=0; i<=a+1; i++)
		{	for(int j=0; j<=b+1; j++)
			{
				printf("%c", arr[i][j]);
			}
			printf("\n");
							}
	//	arr[x1][x2] = ' ';
		printf("Enter input: ");
		scanf(" %c", &input);
		//Change the line and updates the new one.
		if(input == p1.quit)
		{
			return 0;
		}
		while(input !=p1.left&&input!=p1.right&&input!=p1.up&&input!=p1.down&&input!=p1.quit)
		{
			printf("Invalid input.\n");
			printf("Enter input: ");
			scanf(" %c", &input);
		}
		arr[x1][x2] = ' ';
		Update(&p1, input, &x1, &x2);
		printf("Second check: x1: %d, x2: %d\n", x1, x2);
		if(x1==0|| x2==0|| x1== lx||x2==ly)
		{
			arr[f1][f2]=n;
			x1=f1;
			x2=f2;
			continue;
		}
		if(arr[x1][x2]=='X')
		{	arr[x1][x2] ='@';
				

			for(int i=0; i<=a+1; i++)
                       	{	for(int j=0; j<=b+1; j++)
                       		{
                       			printf("%c", arr[i][j]);
                       		}
                       		printf("\n");
			}
			printf("You have died.\nFinal score: %d\n",score); 
			return 1;
		}
		if(arr[x1][x2]=='-')
		{	arr[f1][f2] =n;
			x1=f1;
			x2 =f2;
			continue;

		}
		if(arr[x1][x2]=='$')
		{	score+=1;
			items-=1;
		}
		if(arr[x1][x2]=='*')
		{	arr[x1][x2]=p;
		}
		if(items==0)
		{	printf("Congratulations! You have won.\nFinal score: %d\n",score); 
			return 1;
		}
		if(arr[x1][x2]==p)//Start
		{
			for(int i=7; i>0; i-=1)
			{//The entire loop again.
		// //Gots to delete previous mode
				int f3= x1;
				int f4= x2;
				printf("Score: %d\n",score);
				printf("Items remaining: %d\n", items);
				for(int i=0; i<=a+1; i++)
				{	for(int j=0; j<=b+1; j++)
					{
						printf("%c", arr[i][j]);
					}
					printf("\n");
				}
		
				printf("Enter input: ");
				scanf(" %c", &input);
				if(input == p1.quit)
				{
					return 0;
				}
					
		
				arr[x1][x2] = ' ';
				Update(&p1, input, &x1, &x2);
				printf("f3: %d, f4: %d, x1: %d, x2: %d", f3, f4, x1, x2);
				if(x1==0||x2==0|| x1==lx|| x2==ly)
				{	
					arr[f3][f4]=p; 
					x1 =f3; 
					x2 = f4;
					continue;
				}
				if(arr[x1][x2]=='X' && i==1)
				{
					printf("You have died\n");
					return 0;
				}
				if(arr[x1][x2] == 'X')
				{
					score +=1;
				}
				if(arr[x1][x2]=='-')
				{	
					arr[f3][f4]=p; 
                                 	x1 =f3; 
                                 	x2 = f4;
					continue;
				}
				if(arr[x1][x2]=='$')
				{	score+=1;
					items-=1;
				}
				if(arr[x1][x2]=='*')
				{	
					arr[x1][x2]=p; 
					i =8;
				}
				if(items==0)
				{	printf("Congratulations! You have won.\nFinal score: %d\n",score); 
					return 1;
				}
				arr[x1][x2]=p;
		//
		//
		//
		//There should be another way to do this.
			}
		}
		arr[x1][x2] = n;
		printf("Third check: x1: %d, x2: %d", x1, x2);
	}while(1);
	
//	fclose(fp);
}


int main()
{
	playGame("game1.txt");

}















