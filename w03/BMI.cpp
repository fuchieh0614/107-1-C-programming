#include <stdio.h>
int main(){
	float height,weight;
	double BMI;
	printf("Enter height: ");
	scanf("%f",&height);
	printf("Enter weight: ");
	scanf("%f",&weight);
	while(weight>=0&&weight>=0){
		BMI=weight/((height/100)*(height/100));
		printf("BMI=%.1f\n",BMI);
		if(BMI<18.5)
	   		printf("體重過輕\n");
	   	else if(18.5<=BMI&&BMI<24)
	   	    printf("體重正常\n");
	   	else if(24<=BMI&&BMI<27)
	   	    printf("體重過重\n");
	    else if(27<=BMI&&BMI<30)
		    printf("輕度肥胖\n");
		else if(30<=BMI&&BMI<35)
		    printf("中度肥胖\n");
		else if(BMI>=35)
		    printf("重度肥胖\n");
		printf("Enter height: ");
	    scanf("%f",&height);
		printf("Enter weight: ");
		scanf("%f",&weight); 				
	}		
	return 0;
}
