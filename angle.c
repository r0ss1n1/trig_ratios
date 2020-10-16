#include <stdio.h>
#include <math.h>

/* Thanks Southern Cross Uni for giving me a chance at a BSc Mathematics. Dropped out. Don't regret my try */
/* May be room to reapply & tack this on my application */
/* I love you so much Tai. */
/* github.com/r0ss1n1 */
/* Charles Thomas Wallace Truscott, Byron Bay, NSW, Australia */

int main(void) {

	typedef struct Vector {
		int magnitude;
		int length;

		int i;
		int j;
		int k;

	} Vector;

	typedef struct Fraction {
		float numerator;
		float denominator;

	} Fraction;


	typedef struct Cartesian_Plane {

		int x_coordinate;
		int y_coordinate;
		
	} Cartesian_Plane;

	typedef struct Triangle {

		float opposite;
		float adjacent;
		float hypotenuse;

	} Triangle;


	Triangle FS;

	printf("This program will calculate the ratio of sides of a triangle. Authored by Charles Truscott\n");
	printf("Enter the length of the opposite side, adjacent side & hypotenuse\n");
	printf("What is the length of the opposite side?\n");
	scanf("%f", &FS.opposite);
	printf("OK. What is the length of the adjacent side?\n");
	scanf("%f", &FS.adjacent);
	printf("What is the length of the hypotenuse?\n");
	scanf("%f", &FS.hypotenuse);
	printf("Opposite / Hypotenuse: %f\t Adjacent / Hypotenuse: %f\t Opposite / Adjacent: %f\t\n", FS.opposite / FS.hypotenuse, FS.adjacent / FS.hypotenuse, FS.opposite / FS.adjacent);

	printf("Angles: %f (arcsine) %f (arccosine) %f (arctangent)\n", asin(FS.opposite / FS.hypotenuse), acos(FS.adjacent / FS.hypotenuse), atan(FS.adjacent / FS.hypotenuse));
	return 0;
}