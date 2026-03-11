/*
 * func-name: sub_100E26D0
 * func-address: 0x100e26d0
 * callers: 0x1000f1c3
 * callees: 0x10006e38, 0x100093db
 */

void __thiscall sub_100E26D0(char *this, int a2, int a3)
{
  char *v3; // esi
  char *v4; // edi
  int v5; // ebp
  void (__cdecl *v6)(); // ebx
  int v7; // esi
  unsigned int v8; // ebp
  int v9; // esi
  bool v10; // cc
  char v11; // di
  unsigned int v12; // ebx
  char *v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h]

  v3 = this + 4;
  sub_100093DB((int)&v13, (int)&a2);
  v4 = v13;
  v5 = *((_DWORD *)v3 + 1);
  if ( v13 && v13 == v3 )
  {
    v6 = _invalid_parameter_noinfo;
  }
  else
  {
    v6 = _invalid_parameter_noinfo;
    _invalid_parameter_noinfo();
  }
  v7 = v14;
  if ( v14 != v5 )
  {
    if ( !v4 )
      v6();
    if ( v7 == *((_DWORD *)v4 + 1) )
      v6();
    v8 = *(_DWORD *)(v7 + 24);
    v9 = v7 + 16;
    if ( *(_DWORD *)(v9 + 4) > v8 )
      v6();
    v10 = *(_DWORD *)(v9 + 4) <= *(_DWORD *)(v9 + 8);
    a2 = *(_DWORD *)(v9 + 4);
    if ( !v10 )
      v6();
    v11 = a3;
    v12 = *(_DWORD *)(a3 + 4);
    if ( v12 > *(_DWORD *)(a3 + 8) )
      _invalid_parameter_noinfo();
    sub_10006E38(v11, v12, v9, a2, v9, v8, a2);
  }
}
