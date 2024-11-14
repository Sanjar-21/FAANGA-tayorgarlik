int romanToInt(char *s) {
  int total = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    switch (s[i]) {
    case 'I':
      total += 1;
      break;
    case 'V':
      total += 5;
      break;
    case 'X':
      total += 10;
      break;
    case 'L':
      total += 50;
      break;
    case 'C':
      total += 100;
      break;
    case 'D':
      total += 500;
      break;
    case 'M':
      total += 1000;
      break;
    default:
      return -1;
    }

    if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
      total -= 2;
    if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
      total -= 20;
    if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
      total -= 200;
  }
  return total;
}

// leetcode id 13
// https://leetcode.com/problems/roman-to-integer/