#include <stdio.h>

// scanf(...) -> text
// output caesar cipher(text)

void caesar(char arr[1000]) {
	int i;
	for(i = 0; arr[i] != '\0'; ++i) {
		char ch = arr[i];
		int number = ch - 'A';
		int n = 13;
		number = (number + n) % 26;
		arr[i] = 'A' + number;
	}
	printf("%s\n", arr);
}

int main() {
	char buf[1000];

	while(scanf("%1000s", buf)) {
		caesar(buf);
	}
	

	return 0;
}

