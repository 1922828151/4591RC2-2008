/*
 * func-name: sub_10250F70
 * func-address: 0x10250f70
 * callers: 0x10009967
 * callees: 0x100059fc, 0x1000f759, 0x102c9d62
 */

void __thiscall sub_10250F70(int *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // esi
  _BYTE *v7; // ecx
  unsigned int v8; // edi
  bool v9; // cc
  _BYTE v10[8]; // [esp+10h] [ebp-74h] BYREF
  int v11; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v12[28]; // [esp+1Ch] [ebp-68h] BYREF
  int v13; // [esp+38h] [ebp-4Ch]
  float v14; // [esp+3Ch] [ebp-48h]
  float v15; // [esp+40h] [ebp-44h]
  int v16; // [esp+44h] [ebp-40h]
  int v17; // [esp+48h] [ebp-3Ch]
  char v18; // [esp+4Ch] [ebp-38h]
  int v19; // [esp+50h] [ebp-34h] BYREF
  _BYTE v20[28]; // [esp+54h] [ebp-30h] BYREF
  int v21; // [esp+70h] [ebp-14h]
  int v22; // [esp+80h] [ebp-4h]

  v5 = this[146];
  v6 = (int)(this + 145);
  if ( v5 && (this[147] - v5) / 56 )
  {
    std::wstring::wstring(v20);
    v19 = a2;
    v22 = 0;
    v21 = a4;
    std::wstring::operator=(v20, a3);
    sub_100059FC((int)v10, (int)(this + 142), this[143], (int)&v19);
    v7 = v20;
  }
  else
  {
    std::wstring::wstring(v12);
    v22 = 1;
    std::wstring::operator=(v12, a3);
    v14 = 10.0;
    v17 = 1;
    v15 = 0.0;
    v8 = *(_DWORD *)(v6 + 4);
    v9 = v8 <= *(_DWORD *)(v6 + 8);
    v11 = a2;
    v16 = a4;
    v13 = 0;
    v18 = 0;
    if ( !v9 )
      _invalid_parameter_noinfo();
    sub_1000F759((int)v10, v6, v8, (int)&v11);
    v7 = v12;
  }
  v22 = -1;
  std::wstring::~wstring(v7);
}
