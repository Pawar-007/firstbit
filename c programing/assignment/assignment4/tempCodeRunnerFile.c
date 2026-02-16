// To find sum of digits.
      int sum=0,temp3=number;
      while (temp3>0){
         sum=sum+temp3%10;
         temp3=temp3/10;
      }
      printf("sum of number is %d \n",sum);
      break;