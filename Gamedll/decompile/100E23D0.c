/*
 * func-name: sub_100E23D0
 * func-address: 0x100e23d0
 * callers: 0x100135b6
 * callees: 0x100093db, 0x1000cca2, 0x102c9d62
 */

int __thiscall sub_100E23D0(char *this, int a2, int a3, char a4)
{
  char *v4; // esi
  char *v5; // edi
  int v6; // ebx
  void (__cdecl *v7)(); // ebp
  int v8; // esi
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // edi
  int v13; // eax
  int v14; // ebx
  int v16; // [esp+0h] [ebp-48h]
  char *v17; // [esp+14h] [ebp-34h] BYREF
  int v18; // [esp+18h] [ebp-30h]
  _BYTE v19[28]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v20; // [esp+44h] [ebp-4h]

  v4 = this + 4;
  sub_100093DB((int)&v17, (int)&a4);
  v5 = v17;
  v6 = *((_DWORD *)v4 + 1);
  if ( v17 && v17 == v4 )
  {
    v7 = _invalid_parameter_noinfo;
  }
  else
  {
    v7 = _invalid_parameter_noinfo;
    _invalid_parameter_noinfo();
  }
  v8 = v18;
  if ( v18 == v6 )
    return 0;
  if ( !v5 )
    v7();
  if ( v8 == *((_DWORD *)v5 + 1) )
    v7();
  v9 = v8 + 16;
  v10 = Input::Instance(v16);
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v10 + 112))(v10, v19, a3);
  v11 = 0;
  v20 = 0;
  v12 = 0;
  if ( !sub_1000CCA2() )
  {
LABEL_17:
    v20 = -1;
    std::string::~string(v19);
    return 0;
  }
  while ( 1 )
  {
    v13 = *(_DWORD *)(v9 + 4);
    if ( !v13 || v12 >= (*(_DWORD *)(v9 + 8) - v13) / 92 )
      _invalid_parameter_noinfo();
    v14 = v11 + *(_DWORD *)(v9 + 4);
    if ( (unsigned __int8)std::operator==<char>(v14 + 64, v19) )
    {
      if ( v12 != a2 )
        break;
    }
    ++v12;
    v11 += 92;
    if ( v12 >= sub_1000CCA2() )
      goto LABEL_17;
  }
  v20 = -1;
  std::string::~string(v19);
  return v14;
}
