/* ***********************i*************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skycrapers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marceper <marceper>student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:58:38 by marceper          #+#    #+#             */
/*   Updated: 2024/08/11 20:19:45 by marceper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int row = 0;
	int col = 0;
	char array[4][4] = { {'O','O','O','O'},
				{'O','O','O','O'},
				{'O','0','0','O'},
				{'O','0','0','O'},
				};

	if (argc == 2)
	{
		while (i < 4)
		{
			if (argv[1][i] == ' ') 
            		{
            			i++;
            		} 
                	
			if (argv[1][i] == '4')
			{
				array[0][i] = '1';
				array[1][i] = '2';
				array[2][i] = '3';
				array[3][i] = '4';
			}	
			i++;
			
			if (argv[1][i] == '1')
				array[0][i] = '4';

		}
	}
	
		
	for (row = 0; row < 4; row++)
	{
		for (col = 0; col < 4; col++)
		{

        	printf("%c ", array[row][col]);
            	}

		printf("\n");

         }
	
		return 0;
}
