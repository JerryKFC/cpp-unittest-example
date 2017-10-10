#include <gtest/gtest.h>

#include "calc.h"

class TestCalc:public testing::Test
{
protected:
	Calc calc;

	virtual void SetUp()
	{
	}
};

TEST_F(TestCalc, AddTest)
{
	EXPECT_EQ(calc.Add(6, 2), 8);
}

TEST_F(TestCalc, SubtractTest)
{
	EXPECT_EQ(calc.Subtract(6, 2), 4);
}

TEST_F(TestCalc, MultiplyTest)
{
	EXPECT_EQ(calc.Multiply(6, 2), 12);
}

TEST_F(TestCalc, DivideTest)
{
	EXPECT_EQ(calc.Divide(6, 2), 3);
}

TEST_F(TestCalc, DivideByZero)
{
	EXPECT_ANY_THROW(calc.Divide(6, 0));
}


int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
