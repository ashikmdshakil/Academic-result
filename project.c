#include<stdio.h>

float grade(float number){
	float grade;
	if(number>=80 && number<=100){
		grade= 4.00;
	}
	else if(number>=75 && number<80){
		grade=3.75;
	}
	else if(number>=70 && number<75){
		grade=3.50;
	}
	else if(number>=65 && number<70){
		grade=3.25;
	}
      else if(number>=60 && number<65){
		grade=3.00;
	}
	else if(number>=55 && number<60){
		grade=2.75;
	}
	else if(number>=50 && number<55){
		grade=2.50;
	}
	else if(number>=45 && number<50){
		grade=2.25;
	}
	else if(number>=40 && number<45){
		grade=2.00;
	}
	else{
		grade=0.00;
	}
	return grade;
}

float data_structure(){
    FILE *ds;
    ds=fopen("data structure.text","a");
	int i=0;
    struct student{
		float assignment;
		float attendence;
		float lab;
		float mid_term;
		float class_test;
		float Final;
		float total;
		float point;
	};
      struct student inf[40];
	printf("\n Give the assignment number out of 5 of the student: ");
	scanf("%f",&inf[i].assignment);
	printf("\n Give the attendence number out of 5 of the student: ");
	scanf("%f",&inf[i].attendence);
	printf("\n Give the Lab number out of 25 of the student: ");
	scanf("%f",&inf[i].lab);
	printf("\n Give the Mid Term exam number out of 20: ");
	scanf("%f",&inf[i].mid_term);
	printf("\n Give the class test number out of 15: ");
	scanf("%f",&inf[i].class_test);
	printf("\n Give the final examination number out of 30: ");
	scanf("%f",&inf[i].Final);
      inf[i].total= inf[i].assignment+inf[i].attendence+inf[i].lab+inf[i].mid_term+inf[i].class_test+inf[i].Final;
      inf[i].point=grade(inf[i].total);
      fprintf(ds," \t\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t%.2f\t%.2f\n",inf[i].assignment,inf[i].attendence,inf[i].lab,inf[i].mid_term,inf[i].class_test,inf[i].Final,inf[i].total,inf[i].point);
      fclose(ds);
    return inf[i].point;
}
float mathmatics(){
    FILE *math;
    math=fopen("math.text","a");
    int i=0;
	struct student{
		float assignment;
		float attendence;
		float presentaion;
		float mid_term;
		float class_test;
		float Final;
		float total;
		float point;
	};
      struct student inf[40];

	printf("\n Give the assignment number out of 5 of the student: ");
	scanf("%f",&inf[i].assignment);
	printf("\n Give the attendence number out of 7 of the student: ");
	scanf("%f",&inf[i].attendence);
	printf("\n Give the presentaion number out of 8 of the student: ");
	scanf("%f",&inf[i].presentaion);
	printf("\n Give the Mid Term exam number out of 25: ");
	scanf("%f",&inf[i].mid_term);
	printf("\n Give the class test number out of 15: ");
	scanf("%f",&inf[i].class_test);
	printf("\n Give the final examination number out of 40: ");
	scanf("%f",&inf[i].Final);
      inf[i].total=inf[i].assignment+inf[i].attendence+inf[i].presentaion+inf[i].mid_term+inf[i].class_test+inf[i].Final;
      inf[i].point=grade(inf[i].total);
      fprintf(math," \t\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t%.2f\t%.2f\n",inf[i].assignment,inf[i].attendence,inf[i].presentaion,inf[i].mid_term,inf[i].class_test,inf[i].Final,inf[i].total,inf[i].point);
      fclose(math);
	return inf[i].point;
}
float statistics(){
    FILE *stat;
    stat=fopen("statistics.text","a");

    int i=0;
	struct student{
		float assignment;
		float attendence;
		float presentaion;
		float mid_term;
		float class_test;
		float Final;
		float total;
		float point;
	};
      struct student inf[40];
    printf("\n Give the assignment number out of 5 of the student: ");
	scanf("%f",&inf[i].assignment);
	printf("\n Give the attendence number out of 7 of the student: ");
	scanf("%f",&inf[i].attendence);
	printf("\n Give the presentaion number out of 8 of the student: ");
	scanf("%f",&inf[i].presentaion);
	printf("\n Give the Mid Term exam number out of 25: ");
	scanf("%f",&inf[i].mid_term);
	printf("\n Give the class test number out of 15: ");
	scanf("%f",&inf[i].class_test);
	printf("\n Give the final examination number out of 40: ");
	scanf("%f",&inf[i].Final);
      inf[i].total= inf[i].assignment+inf[i].attendence+inf[i].presentaion+inf[i].mid_term+inf[i].class_test+inf[i].Final;
    inf[i].point=grade(inf[i].total);
    fprintf(stat," \t\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t%.2f\t%.2f\n",inf[i].assignment,inf[i].attendence,inf[i].presentaion,inf[i].mid_term,inf[i].class_test,inf[i].Final,inf[i].total,inf[i].point);
    fclose(stat);
    return inf[i].point;

}
main(){
	int n,i;

	FILE *minf,*ds,*math,*stat;
    	ds=fopen("data structure.text","w");
    	math=fopen("math.text","w");
    	stat=fopen("statistics.text","w");
    	minf=fopen("all information","w");

	fprintf(ds,  " ID\t\tAssignment\tAttendence\tpresentaion\tMid_term\tclass_test\tFinal\t\tTotal\t\tPoint\n");
	fprintf(math," ID\t\tAssignment\tAttendence\tpresentaion\tMid_term\tclass_test\tFinal\t\tTotal\t\tPoint\n");
	fprintf(stat," ID\t\tAssignment\tAttendence\tpresentaion\tMid_term\tclass_test\tFinal\t\tTotal\t\tPoint\n");
	fprintf(minf," ID\tData Structure\t\t\tMath\t\t\tStatistics\n");

	fclose(ds);
	fclose(math);
	fclose(stat);
	fclose(minf);

      float point_of_ds[40];
      float point_of_math[40];
      float point_of_statistics[40];


    char ID_Number[40][40];
	printf("\nHow many students you have?\n");
	scanf("%d",&n);
	printf("\nGIVE THE ID NUMBERS BELLOW :\n");
	for(i=0;i<n;i++){
		printf("\nGive the ID number \n");
		scanf("%s",ID_Number[i]);
	}

	  printf("\n....DATA STRUCTURE.....\n");
      for(i=0;i<n;i++){
       ds=fopen("data structure.text","a");
      printf("\nInput the numbers for %s \n",ID_Number[i]);
      fprintf(ds,"\nID = %s",ID_Number[i]);
      fclose(ds);
      point_of_ds[i]= data_structure(i);
      }

      printf("\n....MATHEMATICS........\n");
      for(i=0;i<n;i++){
       math=fopen("math.text","a");
      printf("\nInput the numbers for %s \n",ID_Number[i]);
    fprintf(math,"\nID = %s",ID_Number[i]);
    fclose(math);
      point_of_math[i]= mathmatics(i);
      }

      printf("\n....STATISTICS........\n");
      for(i=0;i<n;i++){
       stat=fopen("statistics.text","a");
       printf("\nInput the numbers for %s \n",ID_Number[i]);
      fprintf(stat,"\nID = %s",ID_Number[i]);
       fclose(stat);
      point_of_statistics[i]= statistics(i);
      }

      for(i=0;i<n;i++){
      FILE *minf;
      minf=fopen("all information","a");
      fprintf(minf,"\n%s\t %.2f\t\t\t%.2f\t\t\t%.2f\n",ID_Number[i],point_of_ds[i],point_of_math[i],point_of_statistics[i]);
      fclose(minf);
      }
}




