#include <unistd.h>

int detect_repeats(int arr[4])
{
	int	sum;
	int	product;
	int	i;

	sum = 0;
	product = 1;
	i = 0;
	while (i < 4)
	{
		sum += arr[i];
		product *= arr[i];
		i++;
	}
	if (sum == 10 && product == 24)
		return (0);
	return (1);
}

void print_arr(int arr[4])
{
	int		i;
	char	c;

	i = 0;
	while (i < 4)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1); 
}

int main()
{
	int arr[4] = {1,1,1,1};

	while (1)
	{
		if (!detect_repeats(arr))
			print_arr(arr);
		arr[0]++;
		if (arr[0] > 4)
		{
			arr[0] = 1;
			arr[1]++;
			if (arr[1] > 4)
			{
				arr[1] = 1;
				arr[2]++;
				if (arr[2] > 4)
				{
					arr[2] = 1;
					arr[3]++;
					if (arr[3] > 4)
						break ;
				}
			}
		}
	}
}
