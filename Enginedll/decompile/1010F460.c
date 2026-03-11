/*
 * func-name: sub_1010F460
 * func-address: 0x1010f460
 * callers: 0x1010fba0, 0x10113fb0
 * callees: none
 */

int __cdecl sub_1010F460(int a1, unsigned int a2, int a3, int a4)
{
  unsigned __int16 *v5; // ebx
  int i; // [esp+10h] [ebp-4h]

  for ( i = -2128831035; ; i = *v5 ^ (16777619 * i) )
  {
    if ( a1 != -2 && (!a1 || a1 != a3) )
      invalid_parameter_noinfo();
    if ( a2 == a4 )
      break;
    v5 = (unsigned __int16 *)a2;
    if ( a1 != -2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( a2 >= std::wstring::_Myptr(a1) + 2 * *(_DWORD *)(a1 + 20) )
        invalid_parameter_noinfo();
    }
    a2 += 2;
    if ( a1 != -2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v5 >= std::wstring::_Myptr(a1) + 2 * *(_DWORD *)(a1 + 20) )
        invalid_parameter_noinfo();
    }
  }
  return i;
}
