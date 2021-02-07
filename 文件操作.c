//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
////文件的打开fopen()
////与关闭fclose()
////读字符函数fgetc()
////写字符函数fputc()
////    FILE* p1;
////    char c1 = '*';
////    char c2;
////    p1 = fopen("/storage/emulated/0/A_C-Project/test.txt","w");
////    if(!p1)
////    {
////        printf("%s\n",strerror(errno));
////    }
////    else
////    {
////        fputc(c1,p1);
////        fclose(p1);
////        p1 = NULL;
////    }
////    FILE* p2 = fopen("/storage/emulated/0/A_C-Project/test.txt","r");
////    if(p2)
////    {
////        c2 = fgetc(p2);
////        putchar(c2);
////        fclose(p2);
////        p2=NULL;
////    }
////字符串读写
////
////    char s1[50]="这波操作就很骚";
////    FILE* p3= fopen("/storage/emulated/0/A_C-Project/test.txt","w");
////    if(p3)
////    {
////        fputs(s1,p3);
////        fclose(p3);
////        p3=NULL;
////    }
////char s2[50];
////FILE* p4=fopen("/storage/emulated/0/A_C-Project/test.txt","r");
////if(p4)
////{
////fgets(s2,30,p4);
////puts(s2);
////}
//    char sb[50] = "iamyourfather";
//    FILE* p5=fopen("/storage/emulated/0/A_C-Project/test.txt","a");
//    if(p5)
//    {
//        for(int i=0; i<50; i++)
//        {
//            fputc(sb[i],p5);
//            fputc('\n',p5);
//
//
//        }
//        fclose(p5);
//        p5=NULL;
//
//    }
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
