#include <stdio.h>

int main(){
    int a = 1;
    while(1){
        char c = getchar();
        switch(c){
            case 'p': 
                a = a + 1;
                continue;
            case 'n':
                a = a%2;
                continue;
            case 'i':
                if(a == 0){
                    printf("NTCTF{Fake_Flag}");
                    break;
                }
                else{
                    puts("Not a is zero");
                    continue;
                }
        }
    }
    return 0;
}
