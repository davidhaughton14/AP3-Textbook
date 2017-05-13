#include <stdio.h>
#include <string.h>

int strrindex(char *text, char *pattern);

int main()
{
	char text[] = "davidvrtkljnhrtijybgvfrgitvdavidjohbegfvokjhypkjndavid";
	char pattern[] = "david";
	printf("%d\n", strrindex(text, pattern));
	return 0;
}

int strrindex(char *text, char *pattern){
	int i, j, flag;
  int textlen = strlen(text);
  int patternlen = strlen(pattern);

	for(i = textlen - patternlen; i >= 0; i--){
		flag = 1;
		for(j = i; j < i + patternlen; j++){
			if(text[j] != pattern[j-i]){
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			return i;
	}
	return -1;
}
