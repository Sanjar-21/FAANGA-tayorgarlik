bool canMakeSubsequence(char *str1, char *str2) {
  int i = 0;
  int j = 0;
  while (i < strlen(str1) && j < strlen(str2)) {
    if (str1[i] == str2[j])
      j++;
    else if ((str1[i] + 1 - 'a') % 26 + 'a' == str2[j])
      j++;
    i++;
  }
  return j == strlen(str2);