/*
 * func-name: sub_1007DE40
 * func-address: 0x1007de40
 * callers: 0x10078950, 0x1007df50
 * callees: none
 */

int __cdecl sub_1007DE40(char *a1, char *a2, int a3)
{
  char *v3; // edx
  int result; // eax

  v3 = a2;
  result = a3 - ((a2 - a1) >> 6 << 6);
  while ( v3 != a1 )
  {
    v3 -= 64;
    qmemcpy(&v3[a3 - (_DWORD)a2], v3, 0x40u);
  }
  return result;
}
