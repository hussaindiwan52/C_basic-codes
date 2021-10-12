
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char strs[n][100];
    for(int i = 0;i<n;i++){
        scanf("%s",strs[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = 0;strs[i][k]!='\0' && strs[j][k]!='\0' ; k++) {
                if (strs[i][k]<strs[j][k]){
                    break;
                }
                else if (strs[i][k]>strs[j][k]){
                    char temp[100];
                    strcpy(temp, strs[i]);
                    strcpy(strs[i], strs[j]);  
                    strcpy(strs[j], temp);
                    break;
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        printf("\n 1 %s",strs[i]);
    }
    return 0;
}
