//Topic - BMI Calculator
#include <iostream>
using namespace std;

void bmiCalculator(float &wt,float &foot,float &inch){
float bmi,h;

// height in meters
h = (foot * 0.305) + (inch * 0.0254); 

//  BMI calculations
bmi = wt/(h*h);

// BMI status 
if(bmi<16) cout<<"Your BMI Status : "<<bmi<<" (Severe Thinness)";
else if(bmi>=16 && bmi<17) cout<<"Your BMI Status : "<<bmi<<" (Moderate Thinness)";
else if(bmi>=17 && bmi<19) cout<<"Your BMI Status : "<<bmi<<" (Mild Thinness)";
else if(bmi>=19 && bmi<25) cout<<"Your BMI Status : "<<bmi<<" (Normal)";
else if(bmi>=25 && bmi<30) cout<<"Your BMI Status : "<<bmi<<" (Overweight)";
else if(bmi>=30 && bmi<35) cout<<"Your BMI Status : "<<bmi<<" (Obese Class I)";
else if(bmi>=35 && bmi<40) cout<<"Your BMI Status : "<<bmi<<" (Obese Class II)";
else cout<<"Your BMI Status : "<<bmi<<" (Obese Class III)";
}

int main() {
float wt,foot,inch;

// taking weight data from users
cout<<"Enter your weight (in kgs) : ";
cin>>wt;

// taking height data from users (foots and inches separately)
cout<<"Enter your height :"<<"\n"<<"(in foot) : ";
cin>>foot;
cout<<"(in inch) : ";
cin>>inch;

//Recall the bmi function
bmiCalculator(wt,foot,inch);

return 0;
}
