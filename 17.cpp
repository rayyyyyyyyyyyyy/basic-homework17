#include <stdio.h>�@

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int z[5]={0};

	int i=0, min;



	for(i=0;i<5;i++)

	{

	   printf("��%d����ơG", i+1 );

	   scanf("%d", &z[i]);

	}

	min=z[0];

	for(i=0;i<5;i++)

	{

	  if (min>z[i])	

	  {

		  min=z[i];

	  }

	}

	printf("�̤p�Ȭ��G%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
