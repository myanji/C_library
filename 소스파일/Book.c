#include "stdafx.h"
int Bookcount[100] = {0, };
int i = 0;

void ShowList() {

	FILE* fp = fopen("BookList.txt", "r");

	while (!feof(fp)) {
		fscanf(fp, "%s %d", book_name, &book_count);
		printf("%s %d\n", book_name, book_count);
	}
	fclose(fp);
}


void Setcheck_out(char* borrowed) {

	FILE* fp = fopen("BookList.txt", "r");
	i = 0;
	while (!feof(fp)) {
		fscanf(fp, "%s %d", book_name, &book_count);
		strcpy(Bookname[i], book_name);
		Bookcount[i] = book_count;
		i++;
	}

	int j;
	for (j = 0; j <= i; j++) {

		if (!strcmp(Bookname[j], borrowed))
		{
			if (Bookcount[j] > 0)
			{
				printf("대출이 완료되었습니다.");
				Bookcount[j]--;
				break;

			}

			else if (Bookcount[i] == 0)
			{
				printf("대출이 불가능합니다.\n");
			}
		}
		else if (j == i && strcmp(Bookname[j], borrowed))
		{
			printf("책이 존재하지 않습니다.");
		}

	}

	fclose(fp);
}

void Setreturn_book(char* borrowed) {
	FILE* fp = fopen("BookList.txt", "r");
	i = 0;
	while (!feof(fp)) {
		fscanf(fp, "%s %d", book_name, &book_count);
		strcpy(Bookname[i], book_name);
		Bookcount[i] = book_count;
		i++;
	}
	int j;
	for (j = 0; j <= i; j++) {

		if (!strcmp(Bookname[j], borrowed))
		{
			printf("반납이 완료되었습니다.");
			Bookcount[j]++;

		}
	}
	fclose(fp);
}

void File_Reset() {
	FILE* fp = fopen("BookList.txt", "w+");
	int k = 0;
	while (k != i) {
		fprintf(fp, "%s %d", Bookname[k], Bookcount[k]);
		k++;
		if (k < i) {
			fprintf(fp, "\n");
		}
	}
	fclose(fp);

}