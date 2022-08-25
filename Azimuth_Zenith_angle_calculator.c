#include <stdio.h>
#include <math.h>

int main(){

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


return 0;
}