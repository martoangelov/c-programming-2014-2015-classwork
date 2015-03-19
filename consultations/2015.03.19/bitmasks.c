#include <stdio.h>

#define COMPRESS_FLAG 	(1 << 0) 
#define SCALE_FLAG 		(1 << 1)
#define FLIP_FLAG 		(1 << 2)
#define OTHER_FLAG 		(1 << 3)
#define SCALE_FLIP_MASK (SCALE_FLAG|FLIP_FLAG)


void process_image(int *, int);

int main() {

	int image;
	int options = SCALE_FLAG | OTHER_FLAG;
	process_image(&image, options);



	return 0;
}

void process_image(int *image, int options) {
	// options = 0000 0101
	// COMPRESS= 0000 0001  &
	// result  = 0000 0001


	if(options & COMPRESS_FLAG) {
		printf("compress flag is up\n");
	} else {
		printf("compress flag is down\n");
	}
	if(options & SCALE_FLAG) {
		printf("scale flag is up\n");
	} else {
		printf("scale flag is down\n");
	}
	if(options & FLIP_FLAG) {
		printf("flip flag is up\n");
	} else {
		printf("flip flag is down\n");
	}
	if(options & OTHER_FLAG) {
		printf("other flag is up\n");
	} else {
		printf("other flag is down\n");
	}



	if( (options & SCALE_FLIP_MASK)
		== SCALE_FLIP_MASK) {
		printf("scale and flip mask UP\n");
	} else {
		printf("scale and flip mask DOWN\n");
	}
}
