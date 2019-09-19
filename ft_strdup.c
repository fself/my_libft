    #include "libft.h"
    
    char *strdup(const char *s)
    {
        char *new_s = NULL;
        size_t len;

        len = ft_strlen(s);

        new_s = (char*)malloc(sizeof(char) *(len + 1));
        new_s[len] = '\0';
        while(len--){
            new_s[len] = s[len];
        }
        return(new_s);
    }

    