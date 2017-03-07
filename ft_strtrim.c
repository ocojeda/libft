/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 09:48:38 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/03/07 09:48:40 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char		*str;

	if (!s)
		return (NULL);
	j = 0;
	len = ft_strlen(s);
	i = len;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j])
		j++;
	if (s[j] == '\0')
		return (ft_strdup("\0"));
	len = len - j;
	while ((s[--i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		len = len - 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (len--)
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
