#include "validate.h"
#include <unistd.h>

int main()
{
	int solution[4][4] = {{2, 3, 4, 1},
						 {3, 4, 1, 2},
					     {4, 1, 2, 3},
 						 {1, 2, 3, 4}};

	int clues[4][4] = {{3, 2, 1, 4}, {2, 2, 2, 1},
				      {3, 2, 1, 4}, {2, 2, 2, 1}};

	char answer = '0' + validate(solution, clues);
	write(1, &answer, 1);
	return 0;
}
