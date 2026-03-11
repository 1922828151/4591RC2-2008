/*
 * func-name: sub_101E2730
 * func-address: 0x101e2730
 * callers: 0x10011a3b
 * callees: 0x10006f5f
 */

void *__thiscall sub_101E2730(_DWORD *this, void *a2, char a3)
{
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v9 = 0;
  sub_10006F5F((int)&v9, (int)&a3);
  v4 = this[44];
  v5 = this + 43;
  v6 = v9;
  if ( !v9 || v9 != v5 )
    _invalid_parameter_noinfo();
  v7 = v10;
  if ( v10 == v4 )
  {
    std::string::string(a2);
    return a2;
  }
  else
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v7 == v6[1] )
      _invalid_parameter_noinfo();
    std::string::string(a2, (void *)(v7 + 12));
    return a2;
  }
}
