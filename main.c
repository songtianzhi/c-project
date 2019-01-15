#include <stdio.h>

int main()
{
    int qian ;
    printf("进入存钱管理系统\n" );


    
    while(1){
        printf("1--存钱\n");
        printf("2--取钱\n");
        printf("3--余额\n");
        printf("4--退出系统\n");

        int code = 0;
        scanf("%d",&code);
        printf("请输入相对应的功能编号\n");

        
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

        if (code == 1) {
            /* code */
        }

        if (code == 1) {
            /* code */
        }

        if (code == 1) {
            /* code */
        }
        
    }
    
} 