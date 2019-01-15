#include <stdio.h>

int main()
{
    int qian = 0 ;
    printf("进入存钱管理系统\n" );


    
    while(1){
        printf("1--存钱\n");
        printf("2--取钱\n");
        printf("3--余额\n");
        printf("4--退出系统\n");

        printf("请输入相对应的功能编号\n");
        int code ;
        scanf("%d",&code);

        
        if (code == 1) {

            int cun;
            printf("请输入要存入的金额\n");

            scanf("%d",&cun);
            qian += cun;

            printf("存钱成功，点击回车继续\n");
            char x;
            printf("%c",&x);
            printf("%c",&x);

        }

        if (code == 2) {
            int qu ;
            printf("请输入要取出的金额\n");

            scanf("%d",&qu);
            
            if (qu>qian) {
                printf("余额不足，点击回车继续\n");
            }
            else{
                qian -= qu ;
                printf("取钱成功，点击回车继续\n");
            }
           

            
            char x;
            printf("%c",&x);
            printf("%c",&x);

        }

        if (code == 3) {

            printf("当前余额为%d\n",qian);

            printf("查询完毕，点击回车继续\n");
            char x;
            printf("%c",&x);
            printf("%c",&x);

        }

        if (code == 4) {

            printf("退出系统\n");
            break;

        }
        
    }
    
} 