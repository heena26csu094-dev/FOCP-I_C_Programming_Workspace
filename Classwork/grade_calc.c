# include<stdio.h>

int main() {
    int marks;
 char grade;

 printf("enter marks: ");
 scanf("%d", &marks);
 if(90<=marks && marks<=100){
    printf("grade: A+");
}
    else if(70<=marks && marks<=90){
     printf("grade: A ");   
 }
else if(30<=marks && marks<=70){
     printf("grade: B ");
     }
 else if(marks<30 && marks>=0){
     printf("grade: C "); 
    }  
else{printf("invalid marks");
}    
    return 0;
    
}  