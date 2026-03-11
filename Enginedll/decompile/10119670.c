/*
 * func-name: sub_10119670
 * func-address: 0x10119670
 * callers: 0x101196f0, 0x10119750, 0x101197c0
 * callees: none
 */

int __thiscall sub_10119670(_DWORD *this, int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax

  v2 = 0;
  for ( i = 0; ; i += 40 )
  {
    v5 = this[2];
    if ( !v5 || v2 >= (this[3] - v5) / 40 )
      break;
    v6 = this[2];
    if ( !v6 || v2 >= (this[3] - v6) / 40 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(i + this[2]) == a2 )
      return v2;
    ++v2;
  }
  return -1;
}
