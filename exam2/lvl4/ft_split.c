#include <stdlib.h>

int	isSpace(char c)
{
	return (c >= 9 && c <= 13 || c == 32 || !c);
}

int	nwords(char *s)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (!isSpace(s[i] && isSpace(s[i + 1])))
			word++;
		i++;
	}
	return (word);
}

int	countlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] != ' ' && s[i] != '\t'))
		i++;
	return (i);
}

void	freeall(char **new)
{
	int	i;

	i = 0;
	while (new[i])
	{
		free(new[i]);
		i++;
	}
	free(new);
}

char    **ft_split(char *str)
{
	char	**new;
	int	i, j, k, nword, wordlen;

	i = 0;
	k = 0;
	if (!str)
		return (NULL);
	nword = nwords(str);
	new = malloc((nword + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	while (i < nword)
	{
		j = 0;
		while (str[k] == ' ' || str[k] == '\t')
			k++;
		wordlen = countlen(&str[k]);
		new[i] = malloc((wordlen + 1) * sizeof(char));
		if (!new[i])
			return (freeall(new), NULL);
		while (j < wordlen)
		{
			new[i][j] = str[k];
			j++;
			k++;
		}
		new[i][j] = '\0';
		i++;
	}
	return (new);
}

#include <stdio.h>
int main() {
    char str[] = "Este é um teste simples";
    char **split_result;
    int i = 0;

    // Chama ft_split para dividir a string
    split_result = ft_split(str);

    // Se a divisão foi bem-sucedida
    if (split_result) {
        // Imprime as palavras divididas
        while (split_result[i]) {
            printf("Palavra %d: %s\n", i + 1, split_result[i]);
            i++;
        }
        // Libera a memória alocada
        i = 0;
    } else {
        printf("Erro na alocação de memória\n");
    }
	freeall(split_result);
    return 0;
}