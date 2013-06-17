/* Combogen v0.2
 * Copyright 2006-2009 John Gordon <jgor@indiecom.org>
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

int main(void) {
  int lst, i, j;
  int fst[10];
  int mid[10];
  printf("Last Digit: ");
  scanf("%d", &lst);
  if (lst < 0 || lst > 39) {
    printf("Last Digit must be 0-39.\n");
    return 1;
  }
  for (i = 0; i < 10; ++i) {
    fst[i] = (4 * i) + (lst % 4);
    mid[i] = (fst[i] + 2) % 40;
  }
  printf("Possible Combinations:\n");
  for (i = 0; i < 10; ++i) {
    for (j = 0; j < 10; ++j) {
      printf("%02d-%02d-%02d  ", fst[i], mid[j], lst);
      if (j == 4) printf("\n");
    }
    printf("\n");
  }
  return 0;
}

