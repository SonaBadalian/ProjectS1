#include <stdio.h>

int main() {
    // Standards 
    const int STANDARD_pasteurizationTime = 30;  
    const float STANDARD_pasteurizationTemperature = 68.3;  
    const float STANDARD_freezingTemperature = -25;  
    const float STANDARD_storageTemperature_UL= -22; 
    const float STANDARD_storageTemperature_LL= -25; 
    const float STANDARD_totalSolids = 1.6;  
    const float STANDARD_weight = 4.5;  
    const float STANDARD_homogenizationLevel = 2500;  
    const float STANDARD_agingTemperature = 5;  
    const int STANDARD_agingTime = 4;  
    const float STANDARD_percentageOfTotalMilkSolids = 20; 
    const float STANDARD_percentageOfMilkfat = 10; 
    

  int pasteurizationTime, agingTime, N;
  float pasteurizationTemperature,  agingTemperature, homogenizationLevel,freezingTemperature, storageTemperature, totalSolids, weight, percentageOfTotalMilkSolids, percentageOfMilkfat;

      double total_pTem = 0.0,total_pTim = 0,total_aTim = 0, total_aTem = 0.0, total_HL = 0.0, total_fTem = 0.0, total_sTem = 0.0, total_tSolids = 0.0,total_w = 0.0, total_pMS = 0.0, total_MFt = 0.0; 
      double avg1,avg2, avg3, avg4,avg5, avg6, avg7, avg8, avg9, avg10, avg11; 
  


  printf("Enter the number of months to be observed: \n");
  scanf("%d", &N);

  for(int i=0; i<N; i++){
    

    
    printf("Enter the data of No. %d month", i+1);

    
    printf("\n Enter pasteurization time(minutes): ");
    scanf("%d", &pasteurizationTime);
      total_pTem += pasteurizationTime;

    
    printf("Enter pasteurization temperature(Celsius): ");
    scanf("%f", &pasteurizationTemperature);
    total_pTim += pasteurizationTemperature;

    
    printf("Enter homogenization level(Psi): ");
    scanf("%f", &homogenizationLevel);
    total_HL += homogenizationLevel;

    
    printf("Enter aging time(hours): ");
    scanf("%d", &agingTime);
    total_aTim += agingTime;

    
    printf("Enter aging temperature(Celsius): ");
    scanf("%f", &agingTemperature);
    total_aTem +=agingTemperature;

    
    printf("Enter freezing temperature(Celsius): ");
    scanf("%f", &freezingTemperature);
    total_fTem += freezingTemperature;

    
    printf("Enter storage temperature(Celsius): ");
    scanf("%f", &storageTemperature);
    total_sTem += storageTemperature;

    
    printf("Enter total solids(Pounds per gallon): ");
    scanf("%f", &totalSolids);
    total_tSolids += totalSolids;

    
    printf("Enter weight(Pounds per gallon ): ");
    scanf("%f", &weight);
    total_w += weight;

    
    printf("Enter percentage of total milk solids: ");
    scanf("%f", &percentageOfTotalMilkSolids);
    total_pMS += percentageOfTotalMilkSolids;

    
    printf("Enter percentage of milkfat: ");
    scanf("%f", &percentageOfMilkfat);
    total_MFt += percentageOfMilkfat;

      

  
  }
  
  avg1 = total_pTem / N;
  avg2 = total_pTim / N;
  avg3 = total_HL / N;
  avg4 = total_aTim / N;
  avg5 = total_aTem / N;
  avg6 = total_fTem / N;
  avg7 = total_sTem / N;
  avg8 = total_tSolids / N;
  avg9 = total_w / N;
  avg10 = total_pMS / N; 
  avg11 = total_MFt / N; 
  

  printf("Average of pasteurization temperature: %.2f\n", avg1);
  printf("Average of pasteurization ime: %.2f\n", avg2);
  printf("Average of homogenization evel: %.2f\n", avg3);
  printf("Average of aging time: %.2f\n", avg4);
  printf("Average of aging temperature: %.2f\n", avg5);
  printf("Average of freezing temperature: %.2f\n", avg6);
  printf("Average of storage temperature: %.2f\n", avg7);
  printf("Average of total solids per gallon: %.2f\n", avg8);
  printf("Average of weight: %.2f\n", avg9);
  printf("Average of percentage of total milk solids: %.2f\n", avg10);
  printf("Average of percentage of milkfat: %.2f\n", avg11);
  

    // Compare entered values to standards
    if (avg1 == STANDARD_pasteurizationTemperature &&
        avg2 == STANDARD_pasteurizationTime   &&
        (avg3 >= STANDARD_homogenizationLevel && avg3 <= 3000) && avg4 >= STANDARD_agingTime &&
        avg5 ==  STANDARD_agingTemperature &&
        avg6 <= STANDARD_freezingTemperature &&
        (avg7 <= STANDARD_storageTemperature_UL && avg7 >= STANDARD_storageTemperature_LL) &&
        avg8 >= STANDARD_totalSolids  &&
        avg9 >= STANDARD_weight &&
        avg10 >= STANDARD_percentageOfTotalMilkSolids &&
        avg11 >= STANDARD_percentageOfMilkfat){
      
        printf("\n All the ice cream production parameters average met established standards during given  %d months.\n", N);
    } 
    
    else {
        printf("\nNot all the ice cream production parameters averages met established standards during given  %d months.\n", N);
    }

  if (avg1 != STANDARD_pasteurizationTemperature)
    printf("Pasteurization temperature is violated.\n");
  
  if (avg2 != STANDARD_pasteurizationTime )
    printf("Pasteurization time is violated.\n");
  
  if(avg3 < STANDARD_homogenizationLevel) 
    printf("Homogenization level is violated.\n");

  if(avg4 < STANDARD_agingTime)
    printf ("Aging time is violated.\n");

  if(avg5 !=  STANDARD_agingTemperature)
    printf("Aging temperature is vioolated.\n");
    
  if(avg6 > STANDARD_freezingTemperature)
    printf("Freezing temperature is violated.\n");

  if(avg7 > STANDARD_storageTemperature_UL)
    printf("Storage temperature is violated.\n");
  
  if(avg8 < STANDARD_totalSolids) 
    printf("The amount of total solids per gallon is violated.\n");
  
  if(avg9 < STANDARD_weight)
    printf("Normal wight is violated.\n");
  
  if(avg10 < STANDARD_percentageOfTotalMilkSolids)
    printf("Percentage of total milk solids is violated.\n");
  
  if(avg11 < STANDARD_percentageOfMilkfat)
    printf("Percentage of milkfat is violated.\n");
  else
    printf("Nothing has been violated.\n");
  
    return 0;
}
