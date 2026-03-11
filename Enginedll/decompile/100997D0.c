/*
 * func-name: sub_100997D0
 * func-address: 0x100997d0
 * callers: 0x10099a70
 * callees: 0x10051d20, 0x1017a1a0
 */

int __thiscall sub_100997D0(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  int i; // ebx
  int v5; // eax
  int v7; // eax

  v3 = 0;
  if ( !sub_10051D20(this) )
    return 0;
  for ( i = 0; ; i += 104 )
  {
    v5 = this[1];
    if ( !v5 || v3 >= (this[2] - v5) / 104 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)sub_1017A1A0(i + this[1] + 16, a2) )
      break;
    if ( ++v3 >= sub_10051D20(this) )
      return 0;
  }
  v7 = this[1];
  if ( !v7 || v3 >= (this[2] - v7) / 104 )
    invalid_parameter_noinfo();
  return this[1] + 104 * v3;
}
