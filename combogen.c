/* Combogen
 * Copyright 2006-2013 John Gordon <jgor@indiecom.org>
 */

/*   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_COLUMNS 4

int main(int argc, char **argv) {
  int first[10], middle[10], last, columns, count, i, j;

  switch(argc-1) {
    case 0: 
      columns = DEFAULT_COLUMNS;
      printf("Last Digit: ");
      scanf("%d", &last);
      break;
    case 1:
      last = atoi(argv[1]);
      columns = DEFAULT_COLUMNS;
      break;
    case 2:
      last = atoi(argv[1]);
      columns = atoi(argv[2]);
      break;
    default:
      fprintf(stderr, "Too many arguments.\n");
      exit(EXIT_FAILURE);
  }

  if (last < 0 || last > 39) {
    printf("Last Digit must be 0-39.\n");
    return 1;
  }

  printf("Possible Combinations:\n");

  count = 0;
  for (i = 0; i < 10; ++i) {
    first[i] = (4 * i) + (last % 4);
  }

  for (i = 0; i < 10; ++i) {
    middle[i] = (first[i] + 2) % 40;
  }

  int skip = 0;
  for (i = 0; i < 10; ++i) {
    for (j = 0; j < 10; ++j) {
      if (middle[j] == last || 
          (40+middle[j]-2)%40 == last || (40+middle[j]-1)%40 == last ||
          (40+middle[j]+1)%40 == last || (40+middle[j]+2)%40 == last) {
        skip++;
        continue;
      }

      printf("%02d-%02d-%02d  ", first[i], middle[j], last);
      count++;

      if (count % columns == 0) {
        printf("\n");
      }
    }
  }
  printf("\n");

  return 0;
}

