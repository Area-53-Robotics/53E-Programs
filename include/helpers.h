
// General funtions:
void printData();
float arcMeasure(float arcLength, float radius);
float arcLength(float degrees, float radius);
// Opcontrol:
void spinUp();

// Auton:
enum Direction { Left, Right, Forward, Backward };
void moveBangBangLeft(double target, bool isReverse);
void moveBangBangRight(double target, bool isReverse);

//void moveBangBangLeft(double target, bool isReverse);
//void moveBangBangRight(double target, bool isReverse);
void turnBangBang(double target);

void movePid(float target);
void turnPid(Direction direction, float turnValue);
void stopDetect();

// movepid and such would be defined here
