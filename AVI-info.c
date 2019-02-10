#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

main(int argc,char **argv){
	int f1, tm,  w, h, n, ts, dr, fps, nof;
	f1 = open(argv[1], O_RDONLY);
	if(f1 < 0){
		exit(1);
	}
	lseek(f1, 64, SEEK_SET);
	read(f1, &w, sizeof(int));
	read(f1, &h, sizeof(int));
	printf("Megethos Video : %d x %d\n", w, h);
	read(f1, &ts, sizeof(int));
	read(f1, &dr, sizeof(int));
	fps = dr/ts;
	printf("Video FPS : %d\n", fps);
	lseek(f1, 16, SEEK_SET);
	read(f1, &nof, sizeof(int));
	tm = nof/fps;
	printf("Total Video Time : %d sec	\n", tm);
}	