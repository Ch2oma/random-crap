#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
int main(){

    /* 
    
    //data types

    char a = 'C'
    char b[] = "Bro"
    float c = 3.141592 6-7 digits 4 bytes
    double d = 3.141592653589793 15-16 digits 8 bytes
    bool e = true 1 byte
    char f = 100 - ASCII -128 to +127 %d or %c 1 byte
    unsigned char g = 255 0 to 255 %d or %c 1 byte
    short h = 32767 -32,768 to 32,767 2 bytes
    unsigned short i = 65535 0 to 65535 2 bytes
    int j = 2 billion 4 bytes
    unsigned int k = 4 billion %u 4 bytes
    long long l = 9223372036854775807 8 bytes
    unsigned long long m = 18 quintillion 8 bytes
    */

    /* format specifiers
    %c = character
    %s = string (array of characters/ char x[])
    %f = float
    %lf = long float, double
    %d = decimal, integer

    %.1 = decimal display precision
    %1 = field with
    %- left align
    */
   
    /*
    User input example

    char proxy[25];
    int age;
    printf("\nYour name? ");
    //scanf("\n%d", &age);
    fgets(proxy, 25, stdin);
    proxy[strlen(proxy)-1] = '\0';
    printf("\nGood morning %s", proxy);
    printf("\nWhat's your age? ");
    scanf("%d", &age);
    printf("\nyou're %d", age);
    printf("\nSay my name ");
    char his_name[25];
    scanf("%s", &his_name);
    his_name[strlen(his_name)-1] = '\0';
    printf("\nI'm %s. You're Goddamn right\n", his_name);
*/

/*
Math function example
    long long int A = pow(2, 10);
    printf("%d", A);
    
    */

/* 
//Circumference and area program

   const double PI = 3.14159;
   double radius;
   double circumference;
    double area;
   printf("Enter radius of the circle:");
   scanf("%lf", &radius);
   circumference = 2 * PI * radius;
   area = PI * radius * radius;
   printf("Circumference is: %-4.10lf", circumference);
   printf("\nArea is: %-4.10lf", area);

*/

/* 
    double A = sqrt(9)
    double B = pow(2,4)
    int C = round (3.14)
    int D = ceil (3.14) = 4
    int E = floor (3.99) = 3
    double F = fabs (-100)
    double G = log(3) - natural logarithm
    double H = sin (45)
    double I = cos (45)
    double J = tan (45)
 */ 
 /*
 //hypothenuse calculator program, with an if statement

 float a; //first side
 float b; //second side
 float c; //hypethenuse

 printf ("Enter the length of first side:\n");
 scanf("%f", &a);
 printf ("Enter the length of second side:\n");
 scanf("%f", &b);
 c = sqrt(pow(a,2) + pow(b,2));
    printf ("The hypothenuse is: %.6f\n", c);


float c;
scanf("%f", &c);
    if (c > 200){
    printf ("that's a whooping long one!");
    };
   


//if else if and else statement program

float n;
printf("Enter a number:");
scanf("%f", &n);
round(n);
if (n<70){
printf("\nThat's lower than 70");
}

else if (n > 70){
    printf("\nThat's higher than 70");
}

else {
    printf("\n\tNice");
}
*/


//Switch practice
/*

printf("\nEnter your letter grade to get an evaluation:");
char letter;
//fgets(letter, 7, stdin);
//letter[strlen(letter)-1] = '\0';
scanf("%c",&letter);
switch(letter){
case 'A':
printf("Good job ya nerd");
break;
case 'D':
printf("Don't worry about it");
break;
default:
printf("Whatever");
};
*/


/*
//Temperature conv program (BUGGY)

char unit ;
char conv ;
char another;
double temp,result;
bool flag = false;



while (flag == false)
{
printf("Enter the input temperature unit; C, F or K:\n");
scanf("%c", &unit);
unit = toupper(unit);
if (unit == 'C' || unit == 'F' || unit == 'K'){
flag=true;
}
else{
printf("The unit %c you entered is not valid. Please retry with a valid unit.\n\n", unit);
}
}


printf("Enter the value of the temperature:\n");
scanf("%lf", &temp);
printf("check\n");

flag=false;

printf("Enter the unit you want to convert to:\n");
scanf("%c", &conv);
conv = toupper(conv);
if (conv == 'C' || conv == 'F' || conv == 'K'){
flag=true;
}

while (flag == false)
{
printf("Enter the unit you want to convert to:\n");
scanf("%c", &conv);
conv = toupper(conv);
if (conv == 'C' || conv == 'F' || conv == 'K'){
flag=true;
}
else{
printf("The unit %c you entered is not valid. Please retry with a valid unit.\n\n", conv);
}
}


if (unit == 'C'){
switch (conv){
case 'C':
result=temp;
break;
case 'F':
result = temp * 9/5 + 32;
break;
case 'K':
result = temp + 273;
break;
}
}

else if (unit == 'F'){
switch (conv){
case 'C':
result=(temp-32)*5/9;
break;
case 'F':
result = temp;
break;
case 'K':
result = (temp-32)*5/9 + 273;
break;
}
}

else if (unit == 'K'){
switch (conv){
case 'C':
result = temp-273;
break;
case 'F':
result = (temp-273) * 9/5 + 32;
break;
case 'K':
result = temp;
break;
}
}

printf("%.3f%c",temp,unit);
printf("\nThe inputted value is %.3f%c",result,conv);

*/

//simple calculator program (BUGGY)

/*
char operator;
long double num1, num2, result;
char ask;
bool flag=true;

while (flag==true){

printf("\n\n\tWelcome to the simple Calculator!\n Start by selecting an operator (+ - * /):");
scanf ("%c",&operator);


if (operator != '+' && operator != '-' &&operator != '*' && operator != '/' ){
    printf("You need to enter a valid operator.\n\n");
}
else{

    
    printf("Enter the number 1:");
    scanf("%llf",&num1);
    printf("Enter the number 2:");
    scanf("%llf",&num2);

switch (operator){
    case '+':
    result = num1+num2;
    break;
    case '-':
    result = num1-num2;
    break;
    case '*':
    result = num1*num2;
    break;
    case '/':
    result = num1/num2;
    break;
}
printf("The result of the operation %llf%c%llf is: %.6llf\n",num1,operator,num2,result);
}

printf("Would you like to do again? (y/n):\n");

scanf ("%c",&ask);
scanf ("%c",&ask);

if (ask=='n'){flag=false;};

}

printf("\nExiting the program...");
*/

/*

//AND OR NOT operators practice


char based;
char bluepilled;
char cringe;
int age;
float height;


printf("Enter your age:");
scanf(" %d",&age);
printf("Enter your height");
scanf(" %f",&height);

printf("Are you based, bluepilled, cringe? (1/0)");
scanf(" %c",&based);
scanf(" %c",&bluepilled);
scanf(" %c",&cringe);

printf("\t%d\t%f\t%d\t%d\t%d\n",age,height,based,bluepilled,cringe);


if(age>50||age<30){
    printf("You are not middle aged\n");
};

if (height<155||height>175){
    printf("You are not middle height\n");
}

if(based=='1'&&bluepilled=='0'&&cringe=='0'){
    printf("and you're a Chad.\n");
};
if(based=='0'&&(bluepilled=='1'||cringe=='1')){
    printf("and you are a virgin.\n");
};
*/

//Calling another function 

/*
birthday();
birthday();
birthday();
*/

/*
//Internship related: Azumith and Zenith angle calculator,
//slight inaccuracy

double gamma, exact_hour;
short day_of_year, hhour, mminute, ssecond,timezone;
const double PI = 3.142857;
double equation_of_time, time_offset, true_solar_time,declination_angle;
double solar_hour_angle_indegrees, solar_hour_angle_inradians;
double latitude_indegrees, latitude_inradians;
double longitude_indegrees, longitude_inradians ;
double azimuth_angle_inradians, zenith_angle_inradians;
double azimuth_angle_indegrees, zenith_angle_indegrees;
double azimuth_angle_indegrees_2ndmethod, azimuth_angle_inradians_2ndmethod;

printf("Enter your place's latitude and longitude:");
scanf(" %lf",&latitude_indegrees);
scanf(" %lf",&longitude_indegrees);

longitude_inradians = PI*longitude_indegrees/180.0;
latitude_inradians = PI*latitude_indegrees/180.0;

printf("\nEnter your timezone according to UTC (GMT): ");
scanf(" %hi", &timezone);
printf("\nEnter the day of the year:");
scanf (" %hi", &day_of_year);
printf("\nEnter the hour:");
scanf(" %hi", &hhour);
printf("\nEnter the minute:");
scanf(" %hi", &mminute);
printf("\nEnter the second:");
scanf(" %hi", &ssecond);

printf("day:%hi hour:%hi minute:%hi\n",day_of_year,hhour,mminute);

exact_hour=hhour+(mminute/60.0);
printf("\nExact hour is: %f",exact_hour);

gamma = (2*PI/365.25)*(day_of_year+(exact_hour/24.0));
printf("\nGamma is: %lf",gamma);

equation_of_time = 229.18*(0.000075+0.001868*cos(gamma)-0.032077*sin(gamma)-0.014615*cos(2*gamma)-0.040849*sin(2*gamma));
printf("\n\nEquation of time is: %lf",equation_of_time);

declination_angle = 0.006918-0.399912*cos(gamma)+0.070257*sin(gamma)-0.006758*cos(2*gamma)+0.000907*sin(2*gamma)-0.002697*cos(3*gamma)+0.00148*sin(3*gamma);

printf("\n\nDeclination angle in degrees: %lf",declination_angle*180/PI);



time_offset = equation_of_time+4*longitude_indegrees-60*timezone;
printf("\n\nTime offset in minutes is: %lf",time_offset);

true_solar_time=hhour*60+mminute+ssecond/60.0+time_offset;
printf("\nTrue solar time is: %lf", true_solar_time);
printf("\nTrue solar time in 24h format: %d:%d", (int)(true_solar_time/60),((int)true_solar_time-((int)true_solar_time/60)*60));

solar_hour_angle_indegrees=(true_solar_time/4)-180;
printf("\n\nSolar hour angle: %lf", solar_hour_angle_indegrees);
solar_hour_angle_inradians=solar_hour_angle_indegrees*(PI/180);

zenith_angle_inradians=acos(sin(latitude_inradians)*sin(declination_angle)+cos(latitude_inradians)*cos(declination_angle)*cos(solar_hour_angle_inradians));
zenith_angle_indegrees=zenith_angle_inradians*180/PI;
printf("\n\nZenith angle is: %lf",zenith_angle_indegrees);
printf("\nElevation angle is: %lf",90-zenith_angle_indegrees);


azimuth_angle_inradians = acos((sin(declination_angle)-cos(zenith_angle_inradians)*sin(latitude_inradians))/(sin(zenith_angle_inradians)*cos(latitude_inradians)));
azimuth_angle_indegrees = azimuth_angle_inradians*180/PI;

if (solar_hour_angle_inradians>0){
    azimuth_angle_indegrees=360-azimuth_angle_indegrees;
};

printf("\nAzimuth angle is: %lf", azimuth_angle_indegrees);

//printf("\nDeclination angle (in radians): %lf",declination_angle);
//azimuth_angle_inradians_2ndmethod = acos((sin(declination_angle)*cos(latitude_inradians)-cos(solar_hour_angle_inradians)*cos(declination_angle)*sin(latitude_inradians))/sin(zenith_angle_inradians));
//azimuth_angle_indegrees_2ndmethod = azimuth_angle_inradians_2ndmethod*180/PI ;
//printf("\nAzimuth angle with second formula is: %lf", azimuth_angle_indegrees_2ndmethod);

*/

return 0;
}

/*
void birthday()
{
    printf("Happy birthday to you\n");
    printf("Mandalina suyu\n");
    printf("Happy birthday to you\n");
    printf("Happy birthday to you\n\n");

}
*/