//
//  main.c
//  Github1
//
//  Created by 許哲 on 2016/08/23.
//  Copyright © 2016年 許哲. All rights reserved.
//

#include <stdio.h>

int main(void){
    for(int i = 0;i < 10;i++){
        printf("%d\n",i*i);
    }
    for(int i = 0;i < 100;i++){
        if(i % 2 == 0) {
            printf("%d\n",i);
        }
    }
    return 0;
}
