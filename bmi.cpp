#include <iostream>

int main()

{

  double height,weight,bmi;
  
  std::cout << "Type your height (m):";
  std::cin >> height;
  std::cout << "Type your weight (kg):";
  std::cin >> weight;
  
  bmi = weight / (height * height );
  
  std::cout << "Chỉ số BMI của bạn là: " << bmi << "\n";
  
  {
  
    double bmi = weight / (height * height) ;
  
  if (bmi < 18){
  
  std::cout << "=> Còi :v\n";
  }
  
  else if (bmi == 18){
  
  std::cout << "=> Cân đối :)))\n";
  }
  
  else {
  
  std::cout << "=> Béo vãi :v\n";
  
  }
  
  }
  
}
