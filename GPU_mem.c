#include <stdio.h>
#define l 5

int main() {
	char str[l];
	float gib;
	FILE *file;
	FILE *file2;
	int index = 0;
	
	file = fopen("/home/vasilii/.config/i3status/gpu_t/GPU3","r");
	file2 = fopen("/home/vasilii/.config/i3status/gpu_t/mem","w");
	
	if (file != NULL) {
		while (fgets(str, l, file)){
			index ++;
			if (index == 120) {
				fputs(str, file2);
			}
		}
	}
	else {
			fprintf(stderr, "Файл не найден!!!\n");
			return 1;
		}
	fclose(file);
	fclose(file2);
	
	file2 = fopen("/home/vasilii/.config/i3status/gpu_t/mem","r");
	if (file2 != NULL) {
		fscanf(file2, "%f", &gib);
		gib = gib/1000;
	}
	fclose(file2);
	
	file2 = fopen("/home/vasilii/.config/i3status/gpu_t/mem","w");
	fprintf(file2, "%.2f", gib);	
	fclose(file2);
	
	return 0;
}
