/*
 * func-name: sub_1014F720
 * func-address: 0x1014f720
 * callers: 0x1014a540, 0x1014c730
 * callees: 0x1014e230, 0x1014f0d0, 0x1014f670
 */

unsigned int __thiscall sub_1014F720(_DWORD *this, int a2)
{
  char *v2; // ebx
  _DWORD *v3; // esi
  char *v4; // ebp
  unsigned int v5; // edi
  unsigned int result; // eax
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // esi
  int *v10; // ebx
  bool v11; // zf
  int *v12; // eax
  int v13; // ebx
  _DWORD *v14; // edi
  _DWORD *v15; // ebp
  void (__cdecl *v16)(); // esi
  int i; // [esp+10h] [ebp-6Ch]
  int v18; // [esp+14h] [ebp-68h]
  _DWORD v20[2]; // [esp+1Ch] [ebp-60h] BYREF
  _DWORD v21[2]; // [esp+24h] [ebp-58h] BYREF
  _DWORD v22[10]; // [esp+2Ch] [ebp-50h] BYREF
  _BYTE v23[28]; // [esp+54h] [ebp-28h] BYREF
  int v24; // [esp+78h] [ebp-4h]

  v2 = *(char **)(a2 + 8);
  v3 = this;
  if ( *(_DWORD *)(a2 + 4) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v4 = *(char **)(a2 + 4);
  if ( (unsigned int)v4 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  sub_1014F0D0((char **)a2, v21, a2, v4, a2, v2);
  v5 = 0;
  v18 = 0;
  for ( i = 0; ; i += 28 )
  {
    result = v3[12];
    if ( !result )
      break;
    result = (int)(v3[13] - result) / 28;
    if ( v5 >= result )
      break;
    v7 = v3[12];
    if ( !v7 || v5 >= (v3[13] - v7) / 28 )
      invalid_parameter_noinfo();
    v8 = i + v3[12];
    v9 = v3 + 1;
    v10 = sub_1014E230(v9, v8);
    v20[1] = v10;
    if ( !v9 )
      invalid_parameter_noinfo();
    v11 = v10 == (int *)v9[1];
    v20[0] = v9;
    if ( v11 || (unsigned __int8)std::operator<<char>(v8, v10 + 3) )
    {
      v21[1] = v9[1];
      v21[0] = v9;
      v12 = v21;
    }
    else
    {
      v12 = v20;
    }
    v13 = *v12;
    v14 = (_DWORD *)v12[1];
    v15 = (_DWORD *)v9[1];
    if ( *v12 && (_DWORD *)v13 == v9 )
    {
      v16 = invalid_parameter_noinfo;
    }
    else
    {
      v16 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    if ( v14 != v15 )
    {
      std::string::string(v22);
      v24 = 0;
      std::string::string(v23);
      v24 = 1;
      if ( !v13 )
        v16();
      if ( v14 == *(_DWORD **)(v13 + 4) )
        v16();
      v11 = v14 == *(_DWORD **)(v13 + 4);
      v22[8] = v14[10];
      if ( v11 )
        v16();
      std::string::operator=(v22, v14 + 3);
      if ( v14 == *(_DWORD **)(v13 + 4) )
        v16();
      v11 = v14 == *(_DWORD **)(v13 + 4);
      v22[7] = v14[12];
      if ( v11 )
        v16();
      v11 = v14 == *(_DWORD **)(v13 + 4);
      v22[9] = v14[11];
      if ( v11 )
        v16();
      std::string::operator=(v23, v14 + 13);
      sub_1014F670((_DWORD *)a2, v22);
      v24 = 2;
      std::string::~string(v23);
      v24 = -1;
      std::string::~string(v22);
    }
    v5 = ++v18;
    v3 = this;
  }
  return result;
}
