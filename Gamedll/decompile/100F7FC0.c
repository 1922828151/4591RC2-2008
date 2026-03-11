/*
 * func-name: sub_100F7FC0
 * func-address: 0x100f7fc0
 * callers: 0x1000f03d
 * callees: none
 */

int __cdecl sub_100F7FC0(int a1, unsigned int a2, int a3, int a4)
{
  char *v5; // ebx
  int i; // [esp+10h] [ebp-4h]

  for ( i = -2128831035; ; i = *v5 ^ (16777619 * i) )
  {
    if ( a1 != -2 && (!a1 || a1 != a3) )
      _invalid_parameter_noinfo();
    if ( a2 == a4 )
      break;
    v5 = (char *)a2;
    if ( a1 != -2 )
    {
      if ( !a1 )
        _invalid_parameter_noinfo();
      if ( a2 >= *(_DWORD *)(a1 + 20) + std::string::_Myptr(a1) )
        _invalid_parameter_noinfo();
    }
    ++a2;
    if ( a1 != -2 )
    {
      if ( !a1 )
        _invalid_parameter_noinfo();
      if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 20) + std::string::_Myptr(a1) )
        _invalid_parameter_noinfo();
    }
  }
  return i;
}
