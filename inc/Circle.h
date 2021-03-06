#ifndef CIRCLE_H_
#define CIRCLE_H_
#define PI 3.141592653589

#include <Shape.h>

class Circle : public Shape {

  public:
	Circle();

	double GetRadius();
	double SetRadius(double radius);

	double GetArea();
	double GetPerimeter();

  void PrintShapeInfo();
  void AskUserForShapeParameters();

  protected:
	double radius_;

};

#endif //CIRCLE_H_
