/*
 * func-name: sub_10014A10
 * func-address: 0x10014a10
 * callers: 0x10013100
 * callees: none
 */

int __cdecl sub_10014A10(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned __int16 *v5; // ebx
  _DWORD *v6; // eax
  unsigned __int16 *v7; // eax
  int i; // [esp+10h] [ebp-4h]

  for ( i = -2128831035; ; i = *v5 ^ (16777619 * i) )
  {
    if ( a1 != (_DWORD *)-2 && (!a1 || a1 != a3) )
      invalid_parameter_noinfo();
    if ( a2 == a4 )
      break;
    v5 = (unsigned __int16 *)a2;
    if ( a1 != (_DWORD *)-2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( a1[6] < 8u )
        v6 = a1 + 1;
      else
        v6 = (_DWORD *)a1[1];
      if ( a2 >= (unsigned int)v6 + 2 * a1[5] )
        invalid_parameter_noinfo();
    }
    a2 += 2;
    if ( a1 != (_DWORD *)-2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( a1[6] < 8u )
        v7 = (unsigned __int16 *)(a1 + 1);
      else
        v7 = (unsigned __int16 *)a1[1];
      if ( v5 >= &v7[a1[5]] )
        invalid_parameter_noinfo();
    }
  }
  return i;
}
