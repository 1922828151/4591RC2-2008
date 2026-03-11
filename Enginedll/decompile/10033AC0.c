/*
 * func-name: sub_10033AC0
 * func-address: 0x10033ac0
 * callers: 0x10034c30
 * callees: 0x101a251c
 */

int __stdcall sub_10033AC0(void *a1)
{
  int result; // eax

  memset(a1, 0, 0x448u);
  *((float *)a1 + 130) = 0.2;
  *((float *)a1 + 131) = 0.2;
  *((float *)a1 + 132) = 0.2;
  *((float *)a1 + 133) = 0.80000001;
  *(float *)&result = 1.0;
  *((float *)a1 + 134) = 0.80000001;
  *((float *)a1 + 140) = 1.0;
  *((float *)a1 + 135) = 0.80000001;
  *((float *)a1 + 136) = 1.0;
  *((float *)a1 + 137) = 1.0;
  *((float *)a1 + 138) = 1.0;
  *((_DWORD *)a1 + 139) = 0;
  *((_BYTE *)a1 + 564) = 0;
  *((_DWORD *)a1 + 272) = 0;
  return result;
}
