#include<iostream>
#include<cmath>

using namespace std;

/*******************************Online 3***********************************************/
/* In this assignment, you will be dealing with two topics of 2D-geometry:            */
/* point and vector - in an object oriented way. There are 5 parts of the assignment. */
/* At first, read the class definitions of point and vector carefully. After that,    */
/* move on to  the main function where each part of the assignment is described       */
/* separately.                                                                        */
/**************************Time : 60 minutes*******************************************/



/* The following class represents point in 2D Cartesian plane.               */
/* You are not allowed to change the access modifier of any member variable. */
/* You are not allowed to add any new member variable.                       */

class point {
	double x;
	double y;
public:
	point(double x=0, double y=0){this->x = x; this->y = y;}
	
	/* A utility function to facilitate printing the point in (x,y) format.  */
	/* It is not mandatory to understand the function body for accomplishing */
	/* the tasks in this assignment.                                         */
	/* You should not modify this function.                                  */
	friend std::ostream& operator<<(std::ostream& os, const point& p) {
        return (os<<"("<<p.x<<","<<p.y<<")");
    }


};


/* A vector in 2D space can be represented by its two components along X and Y directions. */
/* The following class vector follows such a representation. Here, the variables x and y   */
/* denote the components of the vector along +X and +Y directions respectively. Note that, */
/* if both the components of a vector are zero, then it is known as a Null vector.         */
/* You are not allowed to change the access modifier of any member variable.               */
/* You are not allowed to add any new member variable.                                     */

class vector {
	double x;
	double y;
public:
	vector(double x, double y){this->x = x; this->y = y;}

	/* A utility function to facilitate printing the vector in xi + yj format  */
    /* where i and j are unit vectors along +X and +Y directions respectively. */
	/* It is not mandatory to understand the function body for accomplishing   */
	/* the tasks in this assignment.                                           */
	/* You should not modify this function.                                    */
	friend std::ostream& operator<<(std::ostream& os, const vector& v) {
        if (!(v.x || v.y)) return (os<<0);
        if(v.x) os<<v.x<<"i";
        if(v.x && v.y) os<<(v.y>0?" + ":" - ");
        if(v.y) os<<(v.x?abs(v.y):v.y)<<"j";
        return os;
    }

};



/* Following is the main function. You can find out all the 5 task requirements for this assignment there.           */
/* For your convenience, the expected output of each cout statement is written as a comment alongside the statement. */
/* You should not write or modify any code in this function other than for testing purpose. Even if you do so,       */
/* make sure to remove your modifications before evaluation. Otherwise, you may not see the expected outputs.        */

int main() {

/*****************************Part 1************************************/
/* You do not need to write any code for this part. Just build and     */
/* run the code to understand the definition of class point and vector */
/* Notice that, you can easily print a point or vector just by passing */
/* it to cout.                                                         */
/***********************************************************************/
	
	point p1(2,3),p2(4,7),p3,p4;
    cout<<p1<<endl; // (2,3)
    
	vector v1(2,3),v2(5,4);
    cout<<v1<<endl; // 2i + 3j

/******************************Part 2****************************************/
/* In this part you are required to write necessary code segments to        */
/* facilitate some linear operations on vector. Recall that, the sum of two */
/* vectors can be obtained just by adding their corresponding components.   */
/* For example, (3i+2j) + (5i+4j) = 8i+6j                                   */
/* If you multiply a vector with a scalar, (for this assignment, a scalar   */
/* will mean a double value) each of its components will get multiplied by  */
/* that scalar to generate the resultant vector.                            */
/* Negation of a vector simply means negating each of its components.       */ 
/* Now, Add necessary code so that the following expression compiles and    */
/* the value of v3 is updated accordingly.                                  */
/****************************************************************************/

/*
	vector v3 = -v1 + 1.2*v2;
	cout<<v3<<endl; // 4i + 1.8j
*/

/******************************Part 3***********************************/
/* Following are some unconventional functionalities of point you need */ 
/* to implement for this assignment. The expected behaviour of each    */
/* operation is commented alongwith.                                   */
/***********************************************************************/

/*
	p1++; // Increment the y co-ordinate by 1
    cout<<p1<<endl; // (2,4)
    ++p2; // Increment the x co-ordinate by 1
    cout<<p2<<endl; // (5,7)
    p3--; // Decrement the y co-ordinate by 1
    cout<<p3<<endl; // (0,-1)
    --p4; // Decrement the x co-ordinate by 1
    cout<<p4<<endl; // (-1,0)
*/

/******************************Part 4************************************/
/* A vector can be added to a point to get another point. The resulting */
/* point is the displacement of the original point in direction and     */
/* magnitude of the vector added to it.                                 */
/* For example, if the vector (2i+3j) is added to the point (7,8),      */
/* the resulting point will be (9,11).                                  */
/* Similarly, the difference of two points will create a vector whose   */
/* components will be equal to the difference of corresponding          */
/* co-ordinate values of the points.                                    */
/* In this part, you are required to write code so that the following   */
/* statements compile and behave as described.                          */
/************************************************************************/

/*
	point p5 = p4 + v3;
	cout<<p5<<endl; // (3,1.8)
	vector v4 = p2 - p5;
	cout<<v4<<endl; // 2i + 5.2j
	vector v5 = p4 - p2;
*/	

/******************************Part 5*************************************/
/* For any vector object v, the expression !v should be true if and only */
/* if v is a Null vector (A Null vector has zero value for both the      */
/* components). Add necessary code to make the following statements      */
/* compile.                                                              */
/*************************************************************************/

/*
	if(!(v3+v4+v5))
		cout<<"These three vectors can form a triangle!"<<endl<<"You have completed all the tasks!"<<endl;

*/
    return 0;
}


