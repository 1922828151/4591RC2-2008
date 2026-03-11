/*
 * func-name: sub_100900F0
 * func-address: 0x100900f0
 * callers: 0x10090820
 * callees: none
 */

int __cdecl sub_100900F0(char *a1, char *a2, int a3)
{
  char *v3; // edx
  int result; // eax

  v3 = a2;
  result = a3 - 32 * ((a2 - a1) >> 5);
  while ( v3 != a1 )
  {
    v3 -= 32;
    qmemcpy(&v3[a3 - (_DWORD)a2], v3, 0x20u);
  }
  return result;
}
