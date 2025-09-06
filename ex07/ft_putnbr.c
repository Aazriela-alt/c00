/* ************************************************************************** */
/*                                                                            */
/*  Etape 1 : gérer le cas du plus petit négatif, pour un int                 */
/*    c'est toujours "-2147483648", il suffit de l'écrire                     */
/*                                                                            */
/* Etape 2 : si c'est négatif, écrire "-" et relancer la même fonction        */
/*       Mais avec ton chiffre * -1 (qui sera donc le même mais positif       */
/*                                                                            */
/* Etape 3 : si nb est plus grand que 10, donc >= 10  on rappelle la fonction */
/*  avec nb / 10  , par exemple pour 21, on rappelle la fonction avec 2       */
/*                                                                            */
/* Etape 4 : on écrit le reste (nb % 10), donc dans le cas de 21              */
/* on écrit le 1                                                              */
/* Mais on a rappelé la fonction avec 2 avant, ca ne passe pas à l'étape 1    */
/*              ni 2, ni 3, donc l'étape 4 écrit 2 avant!                     */
/*                                                                            */
/*              ca a donc écrit 21                                            */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, "0" + (nb % 10), 1);
}