#include "../Repo/library/ctest.h"
#include "../Repo/sq.h"

CTEST(Func,test_1){
	
	//Given
	const float a = 1;
	const float b = 2;
	const float c = 1;

	//When
	Roots Real = sq(a,b,c);

	//Then
	const float expected = -1.0000;
	ASSERT_DBL_NEAR(expected,Real.x1);
}

CTEST(Func,test_2){
	
	//Given
	const float a = 1;
	const float b = 8;
	const float c = 16;

	//When
	Roots Real = sq(a,b,c);

	//Then
	const int expected = 1;
	ASSERT_EQUAL(expected,Real.num_roots);
}

CTEST(Func,test_3){
	
	//Given
	const float a = 2;
	const float b = 5;
	const float c = 25;

	//When
	Roots Real = sq(a,b,c);

	//Then
	const int expected = 0;
	ASSERT_EQUAL(expected,Real.num_roots);
}	

CTEST(Func,test_4){
	
	//Given
	const float a = 1;
	const float b = 5;
	const float c = -6;

	//When
	Roots Real = sq(a,b,c);

	//Then
	const int expected = 2;
	ASSERT_EQUAL(expected,Real.num_roots);
}

CTEST(Func,test_5){
	
	//Given
	const float a = 1;
	const float b = 5;
	const float c = -6;

	//When
	Roots Real = sq(a,b,c);

	//Then
	const float expected = 1.0000;
	ASSERT_DBL_NEAR(expected,Real.x1);
}
CTEST(Func,test_6){
	
	//Given
	const float a = 1;
	const float b = 5;
	const float c = -6;

	//When
	Roots Real = sq(a,b,c);

	//Then
	const float expected = -6.00000;
	ASSERT_DBL_NEAR(expected,Real.x2);
}	 
