#include <stdio.h>
#define l 3

int main() {
	char str[l];
	FILE *file;
	FILE *file2;
	int index = 0;
	
	file = fopen("/home/vasilii/.config/i3status/gpu_t/GPU","r");
	file2 = fopen("/home/vasilii/.config/i3status/gpu_t/temp","w");
	
	if (file != NULL) {
		while (fgets(str, l, file)){
			index ++;
			if (index == 174) {
				fputs(str, file2);
				//printf("%s\n", str);
			}
		}
	}
	else {
			fprintf(stderr, "Файл не найден!!!\n");
			return 1;
		}
	fclose(file);
	fclose(file2);
	
	return 0;
}
