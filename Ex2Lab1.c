#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
void a() 
{ 
    
    if (fork() == 0) 
        printf("Ol� do filho!\n"); 
  
    
    else
        printf("Ol� do Pai!\n"); 
} 
int main() 
{ 
    a(); 
    return 0; 
}
