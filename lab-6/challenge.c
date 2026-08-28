#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    float total,avg, mtot,etot,stot,htot,mavg,eavg,savg,havg;
    int i,j,k,l;
    int ml,el,sl,hl;
   float totscoremat[4] = {0};
   float avgscoremat[4];
    char subarr[][25] = {"Math", "English", "Science", "History"};
    struct highsc{
        char subjectname[20];
        float scoreavg;
    };
    struct highsc highavgsub;
    highavgsub.scoreavg = 0;
  struct scores{
    float math,eng,sci,hist;
  };
  struct student{
    char name[20];
    int id;
    struct scores score;
    float avg;
    float highavg;
 };
 struct student st[3], high;
 high.avg = 0;
 for(i=0; i<3; i++){
    printf("Enter name, ID, and 4 grades (Name ID Math English Science History) for student %d: ", i+1);
    scanf("%s %d %f %f %f %f", st[i].name, &st[i].id, &st[i].score.math,&st[i].score.eng,&st[i].score.sci,&st[i].score.hist);
  }
 for (j=0; j<3; j++){
  st[j].avg = (st[j].score.math + st[j].score.eng + st[j].score.sci + st[j].score.hist);
  }
 printf("Student Averages: \n");
 for (k=0; k<3; k++){
  printf("%s (ID: %d): %.2f\n", st[k].name,st[k].id,st[k].avg/4 );
  }
 for(l=0; l<3; l++){
    if(high.avg < st[l].avg){
        high.avg = st[l].avg;
        strcpy(high.name, st[l].name);
    }
 }
 printf("The top student is %s with an average score of : %.2f\n", high.name, high.avg/4);
 
 for (ml=0; ml<3; ml++){
    totscoremat[0] += st[ml].score.math;
   totscoremat[1] += st[ml].score.eng;
   totscoremat[2] += st[ml].score.sci;
    totscoremat[3] += st[ml].score.hist;
 }
 for (el=0;el<4;el++){
   avgscoremat[el] = totscoremat[el]/3;
 }
 printf("Subject Averages: \n");
 for (sl=0;sl<4;sl++){
    printf("%s: %.2f\n", subarr[sl], avgscoremat[sl]);
 }
 for (hl=0; hl<4; hl++){
   if(highavgsub.scoreavg < avgscoremat[hl]){
      highavgsub.scoreavg = avgscoremat[hl];
      strcpy(highavgsub.subjectname, subarr[hl]);
   }
 }
 
 printf("Top Subject is %s with an average score of %.2f", highavgsub.subjectname, highavgsub.scoreavg);




}