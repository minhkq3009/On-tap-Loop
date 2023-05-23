#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void doan_so(int N) {
int so, doan, so_lan_doan = 0;
	srand(time(NULL));
	so = rand() % N;
	printf("Hay doan mot so tu 1 den %d\n", N);
	do {
		if (so_lan_doan > 1000) {
		printf("\nBan dã thua!\n");
		break;
	}
	scanf("%d", &doan);
	if (doan > so) {
	printf("So nho hon xin vui long!\n");
	so_lan_doan++;
	}
	else if (so > doan) {
	printf("So lon hon xin vui long!\n");
	so_lan_doan++;
	}
	else printf("Ban da doan dung so trong %d lan doan!\n", so_lan_doan);
	} 
	while (doan != so);
	}

int main() {
int N = 100;

doan_so(N);
return 0;
}
