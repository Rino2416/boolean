#pragma once
// Boolean

//1
bool Positive(int NumberOne) {
	if (NumberOne > 0) {
		return true;
	}
	else {
		return false;
	}
}
//2
bool Odd(int NumberOne) {
	if (NumberOne % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
//3
bool Even(int NumberOne) {
	if (NumberOne % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
//4
bool Inequalities(int NumberOne, int NumberTwo) {
	if (NumberOne > 2 && NumberTwo <= 3) {
		return true;
	}
	else {
		return false;
	}
}
//5
bool InequalitiesTwo(int NumberOne, int NumberTwo) {
	if (NumberOne >= 0 && NumberTwo < -2) {
		return true;
	}
	else {
		return false;
	}
}
//6
bool DoubleInequalities(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne < NumberTwo < NumberThree) {
		return true;
	}
	else {
		return false;
	}
}
//7
bool Between(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberTwo > NumberOne && NumberThree > NumberTwo) {
		return true;
	}
	else {
		return false;
	}
}
//8
bool EeveryOdd(int NumberOne, int NumberTwo) {
	if (NumberOne % 2 != 0 && NumberTwo % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
//9
bool AtLeastOneOdd(int NumberOne, int NumberTwo) {
	if (NumberOne % 2 != 0 || NumberOne % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
//10
bool OneOdd(int NumberOne, int NumberTwo) {
	if (NumberOne % 2 != 0 && NumberTwo % 2 == 0) {
		return true;
	}
	else if (NumberOne % 2 == 0 && NumberTwo % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
//11
bool Parity(int NumberOne, int NumberTwo) {
	if (NumberOne % 2 == 0 && NumberTwo % 2 == 0 || NumberOne % 2 != 0 && NumberTwo % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
//12 
bool Pozitive(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne > 0 && NumberTwo > 0 && NumberThree > 0) {
		return true;
	}
	else {
		return false;
	}
}
//13
bool AtLeastPozitive(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne > 0 || NumberTwo > 0 || NumberThree > 0) {
		return true;
	}
	else {
		return false;
	}
}
//14
bool OneOfPozitive(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne > 0) {
		return true;
	}
	else if (NumberTwo > 0) {
		return true;
	}
	else if (NumberThree > 0) {
		return true;
	}
	else {
		return false;
	}
}
//15
bool DoublePozitive(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne > 0 && NumberTwo <= 0 && NumberThree <= 0 || NumberOne <= 0 && NumberTwo > 0 && NumberThree <= 0 || NumberOne <= 0 && NumberTwo <= 0 && NumberThree > 0){
		return true;
}
else {
return false;
}
}
//16
bool EvenTwo(int NumberOne) {
	if (NumberOne > 9 && NumberOne % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
//17
bool EvenThree(int NumberOne) {
	if (NumberOne > 99 && NumberOne % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
//18
bool Twix(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne == NumberTwo || NumberOne == NumberThree || NumberTwo == NumberThree) {
		return true;
	}
	return false;
}
//19
bool Twix2(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne == -NumberTwo || NumberOne == -NumberThree || NumberTwo == -NumberThree) {
		return true;
	}
	return false;
}
//20
bool ThreeDigit(int NumberOne, int One , int Two , int Three) {
	One = NumberOne / 100;
	Two = (NumberOne % 100) / 10;
	Three = NumberOne % 10;
	if (One != Two && One != Three && Three != Two) {
		return true;
	}
	else {
		return false;
	}

}
//21
bool Rise(int NumberOne, int One, int Two, int Three) {
	One = NumberOne / 100;
	Two = (NumberOne % 100) / 10;
	Three = NumberOne % 10;
	if (One > Two > Three) {
		return true;
	}
	else {
		return false;
	}

}
//22
bool RiseWane(int NumberOne, int One, int Two, int Three) {
	One = NumberOne / 100;
	Two = (NumberOne % 100) / 10;
	Three = NumberOne % 10;
	if (One > Two > Three  || One < Two < Three) {
		return true;
	}
	else {
		return false;
	}

}
//23
bool Palindrome(int NumberOne, int One, int Two, int Three) {
	One = NumberOne / 100;
	Two = (NumberOne % 100) / 10;
	Three = NumberOne % 10;
	if (One == Three) {
		return true;
	}
	else {
		return false;
	}

}
//24
bool Disc(int D,int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne != 0) {
		D = pow(NumberTwo, 2) - 4 * NumberOne * NumberThree;
	}
	else if (D >= 0) {
		return true;
	}
	else {
		return false;
	}
}
//25
bool SecondQuarter(int X, int Y) {
	if (X < 0 && Y>0) {
		return true;
	}
	else {
		return false;
	}
}
//26
bool FourthQuarter(int X, int Y) {
	if (X > 0 && Y<0) {
		return true;
	}
	else {
	return false;
	}
}
//27
bool SecondThirdQuarter(int X, int Y) {
	if (X < 0 && Y>0 || X < 0 && Y < 0) {
		return true;
	}
	else {
		return false;
	}
}
//28
bool FirstThirdQuarter(int X, int Y) {
	if (X > 0 && Y > 0 || X < 0 && Y < 0) {
		return true;
	}
	else {
		return false;
	}
}
//29
bool  Rectangle(int NumberOne, int NumberTwo, int NumberOneOne, int NumberTwoOne, int NumberOneTwo, int NumberTwoTwo) {
	if (NumberOne > NumberOneOne && NumberOne < NumberOneTwo & NumberTwoTwo < NumberTwo && NumberTwo < NumberTwoOne) {
		return true;
	}
	else {
		return false;
	}
}
//30
bool Triangle(int SideOne, int SideTwo, int SideThree) {
	if (SideOne == SideTwo == SideThree) {
		return true;
	}
	else {
		return false;
	}
}
//31
bool TriangleIsosceles(int SideOneA, int SideTwoB, int SideThreeC) {
	if (SideOneA && SideTwoB == SideTwoB && SideThreeC) {
		return true;
	}
	else {
		return false;
	}
}
//32
bool TriangleRect(int SideOneA, int SideTwoB, int SideThreeC) {
	if (pow(SideOneA, 2) == pow(SideTwoB, 2) * pow(SideThreeC, 2) || pow(SideTwoB, 2) == pow(SideOneA, 2) + pow(SideThreeC, 2) || pow(SideThreeC, 2) == pow(SideOneA, 2) + pow(SideTwoB, 2)) {
		return true;
	}
	else {
		return false;
	}
}
//33
bool TriangleWhat(int SideOne, int SideTwo, int SideThree) {
	if (SideOne + SideTwo > SideThree && SideOne + SideThree > SideTwo && SideTwo + SideThree > SideOne) {
		return true;
	}
	else {
		return false;
	}
}
//34
bool Chess(int NumberOne, int NumberTwo) {
	if (NumberOne && NumberTwo > 0 && NumberOne && NumberTwo <= 8) {
	}
	else if ((NumberOne + NumberTwo) % 2 != 0) {
		return true;
	}
	else {
		return false;
	}

}
//35
bool ChessDouble(int NumberOne, int NumberTwo, int NumberThree, int NumberFour) {
	if ((NumberOne + NumberTwo + NumberThree + NumberFour) % 2 == 0 || (NumberOne + NumberTwo + NumberThree + NumberFour) % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
//36
bool Rook(int NumberOne, int NumberTwo, int NumberThree, int NumberFour) {
	if (NumberOne == NumberThree || NumberTwo == NumberFour) {
		return true;
	}
	else {
		return false;
	}
}
//37
bool King(int NumberOne, int NumberTwo, int NumberThree, int NumberFour) {
	if ((NumberOne - NumberThree) <= 1 && (NumberTwo - NumberFour) <= 1){
	return true;
}
	else {
		return false;
	}
}
//38
bool Elephant(int NumberOne, int NumberTwo, int NumberThree, int NumberFour) {
	if (NumberOne == NumberThree || NumberTwo == NumberFour) {
		return true;
	}
	else {
		return false;
	}
}
//39
bool Queen(int NumberOne, int NumberTwo, int NumberThree, int NumberFour) {
	if (NumberOne == NumberThree || NumberTwo == NumberFour) {
		return true;
	}
	else {
		return false;
	}
}





