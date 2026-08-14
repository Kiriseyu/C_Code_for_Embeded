#include<stdio.h>

int main(void){
	int n=0;
	printf("请输入构建三角形的行数:\n");
	scanf("%d",&n);
	printf("1.这是左上角:\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n-i-1;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	printf("2.这是右上角\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= n;j++){
			printf("* ");
		}
		printf("\r");
		for(int k = 0;k <= i;k++){
			printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	printf("3.这是左下角\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	printf("4.这是右下角\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			printf("* ");
		}
		printf("\r");
		for(int k = 0;k < n-i-1;k++){
			printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	printf("5.坏了这是中上\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			printf("* ");
		}
		printf("\r");
		for(int l = 0;l <= n-i-1;l++){
			printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	printf("6.巧了这是中下\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= n-i-1;j++){
			printf("* ");
		}
		printf("\r");
		for(int k = 0;k <= i;k++){
			printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	printf("7.这是向左\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= n;j++){
			printf("* ");
		}
		printf("\r");
		for(int j = 0;j <= n-i-1;j++){
			printf("  ");
		}
		printf("\r");
		for(int j = 0;j <= i;j++){
			printf("  ");
		}

		printf("\n");
	}
	printf("\n");
	printf("8.这是向右\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(j <= i && j <= n-i-1){
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("这是最后的BOSS菱形:\n");
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++){
            printf("  ");
        }
        for(int j = 0;j < 2 *i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 0;i < n -1;i++){
        for(int j = 0;j <= i;j++){
            printf("  ");
        }
        for(int j = 0;j < 2* (n-i-1);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
