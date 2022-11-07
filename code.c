
void printRoman(int number){
	int one, ten;
	printf("worked");
	one = (number % 10);
    ten = (number / 10)%10;
    
	while(number>0){
		if(number>=10){
			if(ten >= 1 && ten<=3){
				
				printf("X");
				number-=10;
				
			}else if(ten == 4){
				printf("X");
				number+=10;
			}
			else if(ten >= 5){
				printf("L");
				number -= 50;
			}
			
		}
		else{
			if(one>=1 && one<=4){
				printf("I");
				one-=1;

				if(one == 3){
					one+=4;
				}
			}
			else if(one>=5 && one<9){
				printf("V");
				one-=5;
			}
		}
	}
}
