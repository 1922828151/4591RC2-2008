/*
 * func-name: sub_10146680
 * func-address: 0x10146680
 * callers: 0x1001438f
 * callees: 0x10001b04, 0x10018f25
 */

void *__thiscall sub_10146680(void *this, int a2)
{
  int v2; // esi
  int v3; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    a2 = (*(_DWORD *)(a2 + 8) - v3) >> 2;
  else
    a2 = 0;
  sub_10018F25((int)&a2);
  v5 = *(_DWORD *)(v2 + 4);
  if ( v5 > *(_DWORD *)(v2 + 8) )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v6 = *(_DWORD *)(v2 + 8);
    if ( *(_DWORD *)(v2 + 4) > v6 )
      _invalid_parameter_noinfo();
    if ( v5 == v6 )
      break;
    if ( v5 >= *(_DWORD *)(v2 + 8) )
      _invalid_parameter_noinfo();
    sub_10001B04(v5);
    if ( v5 >= *(_DWORD *)(v2 + 8) )
      _invalid_parameter_noinfo();
    v5 += 4;
  }
  return this;
}
