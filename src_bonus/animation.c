/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:34:21 by cvixen            #+#    #+#             */
/*   Updated: 2022/01/20 18:35:50 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	animation_player(t_slg *slg)
{
	if (slg->count_img > 2000 && slg->ani == 0)
	{
		slg->enemy = slg->enemy1;
		slg->count_img = 0;
		slg->ani = 1;
		map_render_init(slg);
	}
	if (slg->count_img > 2000 && slg->ani == 1)
	{
		slg->enemy = slg->enemy2;
		slg->count_img = 0;
		slg->ani = 0;
		map_render_init(slg);
	}
	slg->count_img++;
	return (1);
}
