/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:36:24 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/17 13:48:23 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*previous;
	int				nb;
}	t_list;

typedef struct s_position
{
	t_list	**begin;
	size_t	len;
	char	b;
}	t_position;

//Structure otpi des coups

enum e_action
{
	e_ra,
	e_rb,
	e_rra,
	e_rrb,
	e_pa,
	e_pb,
	e_sa,
	e_sb,
	e_rr,
	e_rrr,
	e_ss,
};

typedef struct s_list_opti
{
	struct s_list_opti	*next;
	enum e_action		mouv;
}	t_list_opti;

typedef struct s_res_opti
{
	t_list_opti	**res;
	t_list_opti	**lst_a;
	t_list_opti	**lst_b;
}	t_res_opti;

int			verif_duplicat(const int nbr, const t_list *lst);

// ============ Utiles =============

int			ft_cmp(const int nbr, char *str);
int			ft_atoi(const char *str, char **split, t_list **lst_a);
void		free_split(char **res);
size_t		ft_strlen(const char *s);
char		**ft_split(char const *s, char c);
void		ft_putnbr(int n);
void		ft_putstr(char *str);
char		*ft_strcpy(char *dest, char *src);

// ========= Instructions ==========

void		ra(t_list **list_a, t_list **list_b, t_res_opti res);
void		rb(t_list **list_a, t_list **list_b, t_res_opti res);
void		rra(t_list **list_a, t_list **list_b, t_res_opti res);
void		rrb(t_list **list_a, t_list **list_b, t_res_opti res);
void		sa(t_list **list_a, t_list **list_b, t_res_opti res);
void		sb(t_list **list_a, t_list **list_b, t_res_opti res);
void		pa(t_list **list_a, t_list **list_b, t_res_opti res);
void		pb(t_list **list_a, t_list **list_b, t_res_opti res);

// ============= Liste =============

t_list		*new(int content);
size_t		size_lst(t_list *lst);
void		add_back(t_list **lst, t_list *new);
void		clear(t_list **lst);
void		ft_print(t_list *lst);

// ============ mediane ============

int			*lst_to_tab(t_position lst);
size_t		max(int *t, size_t size);
void		sort_int_tab(int *tab, size_t size);
int			mediane(int *tab, size_t size);

// ============= Trier =============

void		fill_pile_a(t_list **lst_a, int argc, char **argv);
int			is_sort_a(t_position lst_a);
int			is_sort_b(t_position lst_b);
int			find_pivot_a(t_position lst_a, t_position lst_b, int *pivot_2);
int			find_pivot_b(t_position lst_b);
void		exception(t_position lst_a, t_position lst_b, t_res_opti res,
				int *cpt_rb);
void		sort_a(t_position lst_a, t_position lst_b, t_res_opti res);
int			sort_a_only_3(t_position lst_a, t_position lst_b, t_res_opti res);
void		join_to_a(t_position lst_a, t_position lst_b, t_res_opti res);
void		join_to_b(t_position lst_a, t_position lst_b, t_res_opti res);
void		rev_rotate_a(t_position lst_a, t_position lst_b, t_res_opti res);
void		rev_rotate_b(t_position lst_a, t_position lst_b, t_res_opti res);
void		divise_elements_a(t_position *lst_a, t_position *lst_b,
				t_res_opti res, int *cpt_rb);
void		divise_elements_b(t_position *lst_a, t_position *lst_b,
				t_res_opti res);
void		quick_sort_a(t_position lst_a, t_position	lst_b, t_res_opti res);
void		quick_sort_b(t_position lst_a, t_position	lst_b, t_res_opti res);
int			supprime_elements(enum e_action find, enum e_action cmp);
int			sort_a_3(t_position lst_a, t_position lst_b, t_res_opti res);
void		opti(t_list_opti **res);

// ============= Merge =============

void		merge(t_res_opti res);
void		merge_opti(t_res_opti res);
int			opposition(enum e_action mouv, enum e_action cmp);
int			find_distance_a(t_list_opti *lst_a, t_list_opti *lst_b);
int			find_distance_b(t_list_opti *lst_a, t_list_opti *lst_b);
void		add_ba(t_res_opti res, int max_a);
void		add_ab(t_res_opti res, int max_b);
void		add_equal(t_res_opti res, int max_a, int max_b);
void		add_one_one(t_res_opti res);

// ====== Liste pour les optis =====

t_position	create_position(t_list **begin);
t_res_opti	create_res(	t_list_opti **res, t_list_opti **l_a,
				t_list_opti **l_b);
void		clear_res(t_list_opti **res, t_list_opti **l_a,
				t_list_opti **l_b);
t_list_opti	*new_opti(enum e_action content);
int			size_lst_opti(t_list_opti *lst);
t_list_opti	*last_opti(t_list_opti *lst);
t_list_opti	*find_elem_opti(t_list_opti *lst, t_list_opti *find);
t_list_opti	*delete_2_opti(t_list_opti **begin, t_list_opti *ptr);
void		replace_opti(t_list_opti *ptr);
void		add_back_opti(t_list_opti **lst, t_list_opti *new);
void		clear_opti(t_list_opti **lst);
void		ft_print_opti(t_list_opti *lst);

#endif