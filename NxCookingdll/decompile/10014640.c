/*
 * func-name: sub_10014640
 * func-address: 0x10014640
 * callers: 0x10014680, 0x10030140
 * callees: none
 */

int __thiscall sub_10014640(_DWORD *this)
{
  int result; // eax
  unsigned int v2; // edx
  int v3; // eax
  __int16 v4; // si

  result = this[3];
  v2 = 1;
  for ( *(_WORD *)(result + 2) = 0; v2 < this[1]; *(_WORD *)(result + 2) = v4 )
  {
    v3 = this[3];
    v4 = *(_WORD *)(v3 + 4 * v2 - 2) + *(_WORD *)(v3 + 4 * v2 - 4);
    result = v3 + 4 * v2++;
  }
  return result;
}
