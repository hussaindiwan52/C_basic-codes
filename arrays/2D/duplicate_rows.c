#include <stdio.h>

int main()
{
    int m,n;
    printf("enter size of matrix :- ");
    scanf("%d%d",&m,&n);
    int mat[m][n];
    int dec_equiv[m];
    
    for (int i = 0; i < m; i++) {
        dec_equiv[i]=0;
        for (int j = 0; j < n; j++) {
            printf("enter %d,%d element :- ",i,j);
            scanf("%d",&mat[i][j]);
            dec_equiv[i]*=10;
            dec_equiv[i]+=mat[i][j];
        }
    }
    int count_freq=0;
    for(int i=0 ;i<m;i++){
        for(int j =i+1 ;j<m;j++){
            if(dec_equiv[i]==dec_equiv[j]){
                count_freq++;
                break;
            }
        }
    }
    printf("\nthere are %d duplicate rows",count_freq);
    
    return 0;
}
