/*
 * func-name: sub_100D2260
 * func-address: 0x100d2260
 * callers: 0x1001617b
 * callees: 0x1000516e, 0x1000ca54, 0x100195e7
 */

int __thiscall sub_100D2260(int this, float a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  _BYTE *v5; // ecx
  int v6; // eax
  int v7; // ebx
  struct Game *v8; // edi
  int v9; // eax
  char *v10; // edi
  int v11; // eax
  int v12; // ebp
  struct Game *v13; // edi
  int v14; // eax
  char *v15; // edi
  _BYTE v17[28]; // [esp+1Ch] [ebp-7Ch] BYREF
  _BYTE v18[28]; // [esp+38h] [ebp-60h] BYREF
  _BYTE v19[28]; // [esp+54h] [ebp-44h] BYREF
  _BYTE v20[28]; // [esp+70h] [ebp-28h] BYREF
  int v21; // [esp+94h] [ebp-4h]

  *(_BYTE *)(this + 192) = 0;
  *(_BYTE *)(this + 193) = 0;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 200) = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(this + 156);
    if ( !v4 || v3 >= (*(_DWORD *)(this + 160) - v4) >> 2 )
      break;
    v5 = *(_BYTE **)(*(_DWORD *)(this + 156) + 4 * v3);
    if ( !v5[140] )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 20))(v5) )
    {
      ++*(_DWORD *)(this + 196);
      *(_BYTE *)(this + 192) = 1;
      ++v3;
    }
    else
    {
      ++*(_DWORD *)(this + 200);
      *(_BYTE *)(this + 193) = 1;
LABEL_8:
      ++v3;
    }
  }
  v6 = sub_100195E7((int)v18, *(_DWORD *)(this + 196));
  v21 = 0;
  v7 = std::operator+<char>(v17, &unk_1030F79C, v6);
  LOBYTE(v21) = 1;
  v8 = Game::Instance();
  v9 = *((_DWORD *)v8 + 31);
  v10 = (char *)v8 + 120;
  if ( !v9 || !((*((_DWORD *)v10 + 2) - v9) / 28) )
    _invalid_parameter_noinfo();
  std::string::operator=(*((_DWORD *)v10 + 1), v7);
  LOBYTE(v21) = 0;
  std::string::~string(v17);
  v21 = -1;
  std::string::~string(v18);
  v11 = sub_100195E7((int)v20, *(_DWORD *)(this + 200));
  v21 = 2;
  v12 = std::operator+<char>(v19, &unk_1030F7A0, v11);
  LOBYTE(v21) = 3;
  v13 = Game::Instance();
  v14 = *((_DWORD *)v13 + 31);
  v15 = (char *)v13 + 120;
  if ( !v14 || (unsigned int)((*((_DWORD *)v15 + 2) - v14) / 28) <= 1 )
    _invalid_parameter_noinfo();
  std::string::operator=(*((_DWORD *)v15 + 1) + 28, v12);
  LOBYTE(v21) = 2;
  std::string::~string(v19);
  v21 = -1;
  std::string::~string(v20);
  return sub_1000CA54(a2);
}
