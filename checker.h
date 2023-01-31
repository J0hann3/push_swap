/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:49:46 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/17 13:41:31 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

//	Instructions
void			ra_checker(t_list **list_a, t_list **list_b);
void			rb_checker(t_list **list_a, t_list **list_b);
void			rra_checker(t_list **list_a, t_list **list_b);
void			rrb_checker(t_list **list_a, t_list **list_b);
void			sa_checker(t_list **list_a, t_list **list_b);
void			sb_checker(t_list **list_a, t_list **list_b);
void			pa_checker(t_list **list_a, t_list **list_b);
void			pb_checker(t_list **list_a, t_list **list_b);

enum e_action	str_to_enum(char *str);
int				ft_strcmp(char *str, char *cmp);
int				check_vide(t_list **lst);
int				is_sort_checker(t_list *lst);
void			execute_instructions(t_list_opti **res, t_list **lst_a,
					t_list **lst_b);
int				action(enum e_action mouv, t_list **lst_a, t_list **lst_b);
int				action_1(enum e_action mouv, t_list **lst_a, t_list **lst_b);
void			fill_list_opti(t_list **lst_a, t_list_opti **res);
int				check_vide(t_list **lst);
int				is_sort_checker(t_list *lst);

#endif