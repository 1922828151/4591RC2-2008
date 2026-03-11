/*
 * func-name: sub_100E2530
 * func-address: 0x100e2530
 * callers: 0x1000ac2c
 * callees: 0x100031fc, 0x100093db, 0x1000cca2
 */

int __thiscall sub_100E2530(char *this, int a2, int a3)
{
  char *v4; // esi
  char *v5; // edi
  int v6; // ebx
  void (__cdecl *v7)(); // ebp
  int v8; // esi
  int v9; // esi
  unsigned int v10; // edi
  int v11; // ebp
  int i; // ebx
  int v13; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // [esp+0h] [ebp-48h]
  int v20; // [esp+14h] [ebp-34h] BYREF
  char *v21; // [esp+18h] [ebp-30h] BYREF
  int v22; // [esp+1Ch] [ebp-2Ch]
  _BYTE v23[28]; // [esp+20h] [ebp-28h] BYREF
  int v24; // [esp+44h] [ebp-4h]

  v20 = *(_DWORD *)sub_100031FC((int)&a2);
  v4 = this + 4;
  sub_100093DB((int)&v21, (int)&v20);
  v5 = v21;
  v6 = *((_DWORD *)v4 + 1);
  if ( v21 && v21 == v4 )
  {
    v7 = _invalid_parameter_noinfo;
  }
  else
  {
    v7 = _invalid_parameter_noinfo;
    _invalid_parameter_noinfo();
  }
  v8 = v22;
  if ( v22 == v6 )
    return 0;
  if ( !v5 )
    v7();
  if ( v8 == *((_DWORD *)v5 + 1) )
    v7();
  v9 = v8 + 16;
  v10 = 0;
  if ( !sub_1000CCA2() )
    return 0;
  v11 = a2;
  for ( i = 0; ; i += 92 )
  {
    v13 = *(_DWORD *)(v9 + 4);
    if ( !v13 || v10 >= (*(_DWORD *)(v9 + 8) - v13) / 92 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(_DWORD *)(v9 + 4) + i + 4) == v11 )
      break;
    if ( ++v10 >= sub_1000CCA2() )
      return 0;
  }
  v15 = Input::Instance(v19);
  v16 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v15 + 112))(v15, v23, a3);
  v17 = *(_DWORD *)(v9 + 4);
  v24 = 0;
  if ( !v17 || v10 >= (*(_DWORD *)(v9 + 8) - v17) / 92 )
    _invalid_parameter_noinfo();
  std::string::operator=(*(_DWORD *)(v9 + 4) + 92 * v10 + 64, v16);
  v24 = -1;
  std::string::~string(v23);
  v18 = *(_DWORD *)(v9 + 4);
  if ( !v18 || v10 >= (*(_DWORD *)(v9 + 8) - v18) / 92 )
    _invalid_parameter_noinfo();
  return 92 * v10 + *(_DWORD *)(v9 + 4);
}
