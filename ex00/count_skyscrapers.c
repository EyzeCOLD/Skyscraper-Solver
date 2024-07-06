int	count_up_down(int arr[4][4], int col);

int count_down_up(int arr[4][4], int col);

int count_left_right(int arr[4][4], int row);

int count_right_left(int arr[4][4], int row);

// col_row_selection arguments: 0-3 for the four views from the top,
//  4-7 for the four views from the bottom, 8-11 from the left,
//  12-15 from the right
int count_skyscrapers(int arr[4][4], int col_row_selection)
{
	if (col_row_selection >= 0 && col_row_selection <= 3)
		return (count_up_down(arr, col_row_selection));
	if (col_row_selection >= 4 && col_row_selection <= 7)
		return (count_down_up(arr, col_row_selection - 4));
	if (col_row_selection >= 8 && col_row_selection <= 11)
		return (count_left_right(arr, col_row_selection - 8));
	if (col_row_selection >= 12 && col_row_selection <= 15)
		return (count_right_left(arr, col_row_selection - 12));
	return (-1);
}

int count_up_down(int arr[4][4], int col)
{
	int max;
	int sum;
	int i;

	max = 0;
	sum = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[i][col] > max)
		{
			max = arr[i][col];
			sum++;
		}
		i++;
	}
	return (sum);
}

int count_down_up(int arr[4][4], int col)
{
	int max;
	int sum;
	int i;

	max = 0;
	sum = 0;
	i = 3;
	while (i >= 0)
	{
		if (arr[i][col] > max)
		{
			max = arr[i][col];
			sum++;
		}
		i--;
	}
	return (sum);
}

int count_left_right(int arr[4][4], int row)
{
	int max;
	int sum;
	int i;

	max = 0;
	sum = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[row][i] > max)
		{
			max = arr[row][i];
			sum++;
		}
		i++;
	}
	return (sum);
}

int count_right_left(int arr[4][4], int row)
{
	int max;
	int sum;
	int i;

	max = 0;
	sum = 0;
	i = 3;
	while (i >= 0)
	{
		if (arr[row][i] > max)
		{
			max = arr[row][i];
			sum++;
		}
		i--;
	}
	return (sum);
}
