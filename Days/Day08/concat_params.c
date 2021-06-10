/*
** EPITECH PROJECT, 2020
** concat_params
** File description:
** cpool
*/

int av_len(int argc, char **argv)
{
    int len = 0;

    for (int i = 0; i != argc; i++)
        len += (my_strlen(argv[i] + 1));
    return (len);
}

char *concat_params(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    char *dest = malloc(sizeof(char) * (av_len(argc, argv) + 1));

    for (int i = 0; i != argc; i++) {
        a = 0;
        while (argv[i][a] !=  '\0') {
            dest[b] = argv[i][a];
            a++;
            b++;
        }
        dest[b] = '\n';
        b++;
    }
    dest[b] = '\0';
    return (dest);
}
