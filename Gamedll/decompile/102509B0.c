/*
 * func-name: sub_102509B0
 * func-address: 0x102509b0
 * callers: 0x10012134
 * callees: 0x1000f321, 0x102c9d50
 */

void __thiscall sub_102509B0(int this, int a2)
{
  unsigned int v3; // edi
  int v4; // esi
  int i; // ebx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ebx
  unsigned int v10; // edi
  bool v11; // cc
  _DWORD *j; // esi
  _BYTE v13[4]; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h]

  v3 = 0;
  v4 = this + 580;
  for ( i = 0; ; i += 56 )
  {
    v6 = *(_DWORD *)(v4 + 4);
    if ( !v6 || v3 >= (*(_DWORD *)(v4 + 8) - v6) / 56 )
      break;
    v7 = *(_DWORD *)(v4 + 4);
    if ( !v7 || v3 >= (*(_DWORD *)(v4 + 8) - v7) / 56 )
      _invalid_parameter_noinfo();
    v8 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(i + v8) == a2 )
    {
      v9 = *(_DWORD *)(v4 + 4);
      if ( v8 > *(_DWORD *)(v4 + 8) )
        _invalid_parameter_noinfo();
      v10 = v9 + 56 * v3;
      v11 = v10 <= *(_DWORD *)(v4 + 8);
      v14 = v9;
      if ( !v11 || v10 < *(_DWORD *)(v4 + 4) )
        _invalid_parameter_noinfo();
      sub_1000F321((int)v13, v4, v10);
      return;
    }
    ++v3;
  }
  for ( j = **(_DWORD ***)(this + 572); j != *(_DWORD **)(this + 572); j = (_DWORD *)*j )
  {
    if ( j[2] == a2 )
    {
      if ( j != *(_DWORD **)(this + 572) || (_invalid_parameter_noinfo(), j != *(_DWORD **)(this + 572)) )
      {
        *(_DWORD *)j[1] = *j;
        *(_DWORD *)(*j + 4) = j[1];
        std::wstring::~wstring(j + 3);
        operator delete(j);
        --*(_DWORD *)(this + 576);
      }
      return;
    }
    if ( j == *(_DWORD **)(this + 572) )
      _invalid_parameter_noinfo();
  }
}
