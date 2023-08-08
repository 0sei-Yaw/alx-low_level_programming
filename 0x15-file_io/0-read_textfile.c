#include "main.h"

#include <stdlib.h>

/**

 * read_textfile- reads the text file print to STDOUT.

 * @filename: reading text file


 * @letters: number of letters that needs to be read

 * Return: w- the actual number of bytes that is read and printed

 *        function fails when 0 or filename is NULL.

 */

ssize_t read_textfile(const char *filename, size_t letters)

{

        char *buf;

        ssize_t fo;

        ssize_t w;

        ssize_t t;

        fo = open(filename, O_RDONLY);

        if (fo == -1)

                return (0);

        buf = malloc(sizeof(char) * letters);

        t = read(fo, buf, letters);

        w = write(STDOUT_FILENO, buf, t);

        free(buf);

        close(fo);

        return (w);

}
