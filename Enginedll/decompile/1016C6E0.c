/*
 * func-name: sub_1016C6E0
 * func-address: 0x1016c6e0
 * callers: 0x100b6f70
 * callees: 0x1016c260, 0x1016c9b0, 0x1016ca50, 0x1016cc30
 */

void **__thiscall sub_1016C6E0(_DWORD *this, void *a2, int a3, void ***a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // edi
  float *v10; // eax
  void **v11; // edx
  float v12; // esi
  void ***v14; // eax
  void **v15; // edx
  void **v16; // esi
  _DWORD *v17; // [esp+10h] [ebp-54h] BYREF
  int v18; // [esp+14h] [ebp-50h]
  int v19; // [esp+1Ch] [ebp-48h]
  _BYTE v20[28]; // [esp+20h] [ebp-44h] BYREF
  _BYTE v21[28]; // [esp+3Ch] [ebp-28h] BYREF
  int v22; // [esp+60h] [ebp-4h]

  std::wstring::wstring(v20, a2);
  v22 = 0;
  std::wstring::operator+=(v20, a3);
  v5 = sub_1016C9B0(v21, *(_DWORD *)(a3 + 524));
  LOBYTE(v22) = 1;
  std::wstring::operator+=(v20, v5);
  LOBYTE(v22) = 0;
  std::wstring::~wstring(v21);
  LOBYTE(v6) = *(_DWORD *)(a3 + 532) == 700;
  v7 = sub_1016CA50(v21, v6);
  LOBYTE(v22) = 2;
  std::wstring::operator+=(v20, v7);
  LOBYTE(v22) = 0;
  std::wstring::~wstring(v21);
  sub_1016CC30(&v17, v20);
  v8 = v17;
  v19 = this[2];
  if ( !v17 || v17 != this + 1 )
    invalid_parameter_noinfo();
  v9 = v18;
  if ( v18 == v19 )
  {
    v14 = sub_1016C260(a2, a3);
    v22 = -1;
    if ( v14 )
    {
      v15 = v14[2];
      *((float *)v14 + 1) = GSeconds;
      *a4 = v15;
      a4[1] = v14[3];
      v16 = *v14;
      std::wstring::~wstring(v20);
      return v16;
    }
    else
    {
      std::wstring::~wstring(v20);
      return 0;
    }
  }
  else
  {
    if ( !v8 )
      invalid_parameter_noinfo();
    if ( v9 == v8[1] )
      invalid_parameter_noinfo();
    v10 = *(float **)(v9 + 40);
    v11 = (void **)*((_DWORD *)v10 + 2);
    v10[1] = GSeconds;
    *a4 = v11;
    a4[1] = (void **)*((_DWORD *)v10 + 3);
    v12 = *v10;
    v22 = -1;
    std::wstring::~wstring(v20);
    return (void **)LODWORD(v12);
  }
}
