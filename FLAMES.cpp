//FLAMES
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<conio.h>
int main()
{
	
	
	int len1, len2, count=0,i ,j,l;
	std::string name1, name2, name3, name4;
	
	printf("Enter your name:\n");
	std::getline (std::cin,name1);
	printf("\nEnter the other person's name:\n");
	std::getline (std::cin,name2);
	
	len1 = name1.size();
	len2 = name2.size();
	
	name3=name1;
	name4=name2;
	
	for(i=0; i<len1; i++)

		for (j=0; j<len2; j++)
			{
				 if(name1[i]==name2[j] || name1[i]==name2[j]+32 || name1[i]==name2[j]-32)
				 	
					{
						if(name1[i]!=' ')
						
						{
							count = count+1;
				 			name2[j]= '\0';
				 			break;
						}
					}
				 	
			}

	std::cout<<"\nFLAMES match score:\n"<<count;
	
	int hit=6,pos,relt[]={1,2,3,4,5,6},temp1=0,temp;
	for(int k=0; k<5; k++ )
		{
			
	
	
				
				pos=((((count)%hit)+temp1)%hit)-1;   //well it's my logic 
				if(pos==-1)
				{
					pos=hit-1;
				}
	
			
			
			temp1=pos;
			int z=pos;
			for(int h=0; h<5-pos; h++)
			{
				
				temp=relt[z];						//swap of clacled alpalbet
				relt[z]=relt[z+1];
				relt[z+1]=temp;
				z++;
			
			}
			hit--;	
								
			
		}
		printf("\n\n");
		switch(relt[0])
		{
			case 1: std::cout<<name1<<" will be FRIEND of "<<name4;
					break;
			case 2: std::cout<<name1<< " will be " <<name4<<"'s LOVER ";
					break;
			case 3: std::cout<<name1<< " will be AFFECTIONATE to " <<name4;
					break;
			case 4: std::cout<<name1<< " will be MARRIED to " <<name4;
					break;
			case 5: std::cout<<name1<< " and " <<name4<<" will be ENEMIES ";
					break;
			case 6: std::cout<<name1<< " and " <<name4<<" will be SIBLINGS ";
					break;		
		}
getch();
return 0;
}
