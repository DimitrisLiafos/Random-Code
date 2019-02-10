#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdarg.h>

struct menu{
		char *see, *root, *name;
	}menu;


	main(){
	int i, choice;
	menu launcher[7];
	pid_t kid = fork();
	launcher.see[0] = "1. run firefox";
	launcher.see[1] = "2. run firefox ( and wait )";
	launcher.see[2] = "3. run gedit";
	launcher.see[3] = "4. run gedit ( and wait )";
	launcher.see[4] = "5. run gnome-calculator";
	launcher.see[5] = "6. run gnome-calculator ( and wait )";
	launcher.see[6] = "0. exit";
	launcher.root[0] = "/usr/bin/firefox";
	launcher.root[1] = "/usr/bin/firefox";
	launcher.root[2] = "/usr/bin/gedit";
	launcher.root[3] = "/usr/bin/gedit";
	launcher.root[4] = "/usr/bin/gnome-calculator";
	launcher.root[5] = "/usr/bin/gnome-calculator";
	launcher.root[6] = " ";
	launcher.name[0] = "firefox";
	launcher.name[1] = "firefox";
	launcher.name[2] = "gedit";
	launcher.name[3] = "gedit";
	launcher.name[4] = "gnome-calculator";
	launcher.name[5] = "gnome-calculator";
	launcher.name[6] = " ";
	for(i=0; i<7; i++){
		printf("%s\n", launcher.see[i]);
		scanf("%d", &choice);
	}
	if(choice == 1){
		if( kid == 0){
			execl(launcher.root[0], launcher.name[0], NULL);
		}
	}
	else if(choice == 2){
		if( kid == 0 ){
			execl(launcher.root[1], launcher.name[1], NULL);
		}
		waitpid(kid, NULL, 0);
	}
	else if( choice == 3 ){
		if( kid == 0){
			execl(launcher.root[2], launcher.name[2], NULL);
		}
	}
	else if( choice == 4){
		if( kid == 0){
			execl(launcher.root[3], launcher.name[3], NULL);
		}
		waitpid(kid, NULL, 0);
	}
	else if( choice == 5 ){
		if( kid == 0){
			execl(launcher.root[4], launcher.name[4], NULL);
		}
	}
	else if( choice == 6){
		if( kid == 0){
			execl(launcher.root[5], launcher.name[5], NULL);
		}
		waitpid(kid, NULL, 0);
	}
	else{
		if( kid == 0){
			exit(0);
		}
	}
}