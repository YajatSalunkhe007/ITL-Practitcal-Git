#include <stdio.h>
int main () {
  char day;
  printf("enter day (m, t, w, T, f, s, S)=");
  scanf("%d", &day);
  switch (day){
      case 'm': printf("Monday");
      break;
      case 't': printf("Tuesday");
      break;
      case 'w': printf("Wednesday");
      break;
      case 'T': printf("Thursday");
      break;
      case 'f': printf("Friday");
      break;
      case 's': printf("Saturday");
      break;
      case 'S': printf("Sunday");
      break;
      default:printf("Not a Valid Day");
  }
  return 0;
}