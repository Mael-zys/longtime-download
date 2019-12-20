#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int i=0;	
	while(1){
		i++;
		if(i%4==1) printf("获取:%d http://cn.archive.ubuntu.com/ubuntu bionic/main amd64 libhttp-parser2.7.1 amd64 %d.%d.%d-2 [%d.%d kB]\n",i,rand()%10,rand()%100,rand()%200,rand()%2000,rand()%10);
		if(i%4==2) printf("获取:%d http://cn.archive.ubuntu.com/ubuntu CC-MAIN-%d-%d/wet.paths.gz [%d.%d kB]\n",i,rand()%20+2000,rand()%30,rand()%2000,rand()%10);
		if(i%4==3) printf("获取:%d https://commoncrawl.s3.amazonaws.com/ubuntu  CC-MAIN-%d-%d/wet.paths.gz [%d.%d kB]\n",i,rand()%20+2000,rand()%30,rand()%2000,rand()%10);
		fflush(stdout);
		if(i>300)
			sleep(rand()%5+1);
		if(i>300 && i%4==0){ 
			printf("获取:%d http://cn.archive.ubuntu.com/ubuntu bionic-updates/universe amd64 nodejs amd64 %d.%d.%d-2 [%d.%d kB]\n",i,rand()%10,rand()%100,rand()%200,rand()%2000+2000,rand()%10);
			fflush(stdout);
			sleep(10);
		}
		
		
	}
	return 0;


}
