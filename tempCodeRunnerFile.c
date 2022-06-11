
    else if(limit[i] < 0){
      sum2 += sum2;
        negative++;
        average2 = sum2 / negative;
    }
    else{
        zero++;
    }
    limit[i]--;
  }

  printf("\nPositive Numbers : %d\n", positive);
  printf("Negative Number