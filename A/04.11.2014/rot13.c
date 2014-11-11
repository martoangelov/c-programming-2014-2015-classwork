#include <stdio.h>

void encode(char arr[1000]) {
	int i;
	for(i = 0; arr[i] != '\0'; ++i) {
		char ch = arr[i];
		int number = ch - 'A';
		number = (number + 13) % 26;
		arr[i] = number + 'A';
	}
	printf("%s\n", arr);
}

int main() {
	char buf[1000];
	// encode(buf);
	scanf("%s", buf);
	//          ^ -- no ampersand
	encode(buf);

	return 0;
}


// scanf some text
// rot13(text)