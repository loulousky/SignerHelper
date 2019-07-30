#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<direct.h>
#include<string.h>



int main(){

char buff[1000];
_getcwd(buff,1000);
char keystore[1000];
char resultapk[1000];
char *singer=malloc(500*sizeof(char));
char final[1000];
strcpy(keystore,buff);
strcpy(resultapk,buff);
strcpy(final,buff);
//strcpy(singer,buff);
char *key="\\xxxx.keystore";
char *end="\\1.apk";  
char *ok="\\1_signed.apk";
char *_zok="\\1_signed_align.apk";
strcat(buff,end);
strcat(keystore,key);
strcat(resultapk,ok);
strcat(final,_zok);
//得到当前的路径指定当前目录下APK的名字为1
// printf("%s",buff);
// printf("%s",keystore);
// printf("%s",resultapk);
//调用android自带的工具对apk进行签名
//java -jar apksigner.jar sign  --ks key.jks  --ks-key-alias releasekey  --ks-pass pass:pp123456  --key-pass pass:pp123456  --out output.apk  input.apk
char *bat="java -jar apksigner.jar sign --ks ";
char *singer2=" --ks-key-alias phoneassist --ks-pass pass:xxxxxx1  --key-pass pass:xxxxxx2  --out ";
//对齐优化
printf("%s\n","please waiting for new APK...");
char _zsinger[500]="zipalign.exe -v -p 4 ";
strcat(_zsinger,buff);
strcat(_zsinger," ");
strcat(_zsinger,resultapk);
printf("%s",_zsinger);

printf("%s\n",_zsinger);
system(_zsinger);
//调用window的命令行进行签名
  strcpy(singer,bat);
 strcat(singer,keystore);
 strcat(singer,singer2);


 strcat(singer,final);
 strcat(singer," ");
 strcat(singer,resultapk);
 printf("%s\n",singer);
system(singer);

//getchar();
remove(resultapk);

return 0;
}
