/*
 * func-name: sub_1003B570
 * func-address: 0x1003b570
 * callers: 0x1003b730, 0x1003c0b0, 0x100915b0, 0x100f7930, 0x100f8300, 0x10112340, 0x101128f0, 0x10112ea0, 0x10113450, 0x10113a00, 0x10176ac0, 0x10177240, 0x101779b0
 * callees: none
 */

int __cdecl sub_1003B570(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4)
{
  char *v5; // ebx
  _DWORD *v6; // eax
  char *v7; // eax
  int i; // [esp+10h] [ebp-4h]

  for ( i = -2128831035; ; i = *v5 ^ (16777619 * i) )
  {
    if ( a1 != (_DWORD *)-2 && (!a1 || a1 != a3) )
      invalid_parameter_noinfo();
    if ( a2 == a4 )
      break;
    v5 = (char *)a2;
    if ( a1 != (_DWORD *)-2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( a1[6] < 0x10u )
        v6 = a1 + 1;
      else
        v6 = (_DWORD *)a1[1];
      if ( a2 >= (unsigned int)v6 + a1[5] )
        invalid_parameter_noinfo();
    }
    ++a2;
    if ( a1 != (_DWORD *)-2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( a1[6] < 0x10u )
        v7 = (char *)(a1 + 1);
      else
        v7 = (char *)a1[1];
      if ( v5 >= &v7[a1[5]] )
        invalid_parameter_noinfo();
    }
  }
  return i;
}
