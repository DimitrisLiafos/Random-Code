#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

main(int argc,char **argv){
	int f1, noc,sr, bps;
	f1 = open(argv[1], O_RDONLY);
	if(f1 < 0){
		exit(1);
	}
	lseek(f1, 22, SEEK_SET);
	read(f1, &noc, sizeof(short));
	read(f1, &sr, sizeof(int));
	lseek(f1, 34, SEEK_SET);
	read(f1, &bps, sizeof(short));
	if(noc == 1){
		printf(" Channel Type : Mono \n");
	}
	else if(noc == 2){
		printf(" Channel Type : Stereo \n");
	}
	else{
		printf(" Channel Type : Other \n");
	}
	printf(" Sample Rate : %d\n", sr);
	printf(" Sample is %d bits\n", bps);
}	