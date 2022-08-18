import java.lang.*;
import java.util.*;

class MathematicsX
{
	public int Difference(int iArr[])
	{
		int iCount  = 0;

		for(int j = 0; j < iArr.length; j++)
		{
			if(iArr[j] % 2 == 0)
			{
				iCount += iArr[j];
			}
			else
			{
				iCount -= iArr[j];
			}
		}

		if(iCount < 0)
		{
			iCount = -iCount;
		}

		return iCount;
	}
}

class Main
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Count of Elements");
		int iSize = sobj.nextInt();

		int iElements[] = new int[iSize];

		if(iElements.length == 0)
		{
			System.out.println("Unable to Allocate Memory");
			return;
		}

		System.out.println("Enter "+iSize+" Elements");

		for(int i = 0; i < iSize; i++)
		{
			iElements[i] = sobj.nextInt();
		}

		MathematicsX mobj = new MathematicsX();
		int iResult = mobj.Difference(iElements);

		System.out.println("Result is "+iResult);
	}
}