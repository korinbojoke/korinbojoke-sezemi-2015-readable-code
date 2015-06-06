#include<stdio.h>

#define MAX_STRING 128		//�ő啶������128�����Ƃ���

void printRecipe(char *);	//���V�s��\�����邽�߂̊֐�


int main(void){
	FILE *file;
	char recipe[MAX_STRING];

	/*file open*/
	file = fopen("recipe.txt", "r");
	if (file == NULL){
		perror("file open error");
	}

	/*fgets*/
	if (fgets(recipe, MAX_STRING, file) < 0){
		perror("file write error");
	}

	/*printRecipe*/
	printRecipe(recipe);
	return 0;
}

void printRecipe(recipe)
{
	printf("%s\n",recipe);
	return;
}