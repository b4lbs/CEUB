#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
void a() 
{ 
    
    if (fork() == 0) 
        printf("Olá do filho!\n"); 
  
    
    else
        printf("Olá do Pai!\n"); 
} 
int main() 
{ 
    a(); 
    return 0; 
}
