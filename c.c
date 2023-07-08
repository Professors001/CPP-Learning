#include <stdio.h>

int main() {
    int N ;
    scanf("%d" , &N) ;
    int saofai[N] ;
    int saifai = 0;
    int checker = 1;
    for (int i = 0; i < N; i++)
    {   
        scanf("%d" , &saofai[i]) ;
    }
    
    // height check

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1 ; j < N; j++)
        {
            for (int k = i+1; k < j; k++)
            {
                if (saofai[k] >= saofai[i] || saofai[k]>= saofai[j] )
                {
                    checker = 0 ;
                    break ;
                }
                
            }

            if (checker)
            {
                saifai += 1 ;
                
            }
            checker = 1 ;
        }
    
    }
    printf("%d" , saifai) ;
    
}