/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wave.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junehan <junehan.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:54:02 by junehan           #+#    #+#             */
/*   Updated: 2022/04/09 02:24:30 by junehan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_array.h"

void	wave(int *arr, int n)
{
	int i;

	i = 0;
	while (i < n - 1) {
		if (i % 2) {
			if (*(arr + i) < *(arr + i + 1))
				swap(arr + i, arr + i + 1);
		} else {
			 if (*(arr + i) > *(arr + i + 1))
				swap(arr + i, arr + i + 1);
		}
		i++;
	}
}
