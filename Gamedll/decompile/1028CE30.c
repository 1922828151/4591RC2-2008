/*
 * func-name: ?RefreshArmor@CStatusUI@@AAEXPAVDamageUnit@GameClient@@@Z_0
 * func-address: 0x1028ce30
 * callers: 0x10008693
 * callees: 0x10007d8d, 0x10011a4f, 0x1001a564, 0x102c9d62, 0x102c9fe0
 */

void __thiscall CStatusUI::RefreshArmor(CStatusUI *this, struct GameClient::DamageUnit *a2)
{
  struct GameClient::DamageUnit *v2; // ebp
  CStatusUI *v3; // ebx
  int v4; // eax
  int v5; // edx
  char *v6; // edi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  void *v15; // esi
  void *v16; // ebx
  int v17; // eax
  unsigned int v18; // esi
  int v19; // ebx
  int v20; // eax
  int v21; // esi
  double v22; // st7
  int v23; // esi
  void *v24; // ebp
  bool v25; // cc
  int v26; // ecx
  _BYTE *v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // ebx
  int v31; // ecx
  int *v32; // ecx
  int v33; // edx
  unsigned __int8 (__thiscall *v34)(int *); // eax
  unsigned __int8 v35; // bl
  int v36; // [esp+14h] [ebp-D0h]
  int i; // [esp+18h] [ebp-CCh]
  unsigned int v38; // [esp+18h] [ebp-CCh]
  float v40; // [esp+20h] [ebp-C4h]
  float v41; // [esp+24h] [ebp-C0h]
  int v42[2]; // [esp+28h] [ebp-BCh] BYREF
  struct GameClient::DamageUnit *v43; // [esp+30h] [ebp-B4h]
  int v44; // [esp+34h] [ebp-B0h] BYREF
  _BYTE v45[28]; // [esp+3Ch] [ebp-A8h] BYREF
  _BYTE v46[28]; // [esp+58h] [ebp-8Ch] BYREF
  _BYTE v47[28]; // [esp+74h] [ebp-70h] BYREF
  _BYTE v48[28]; // [esp+90h] [ebp-54h] BYREF
  wchar_t Buffer[20]; // [esp+ACh] [ebp-38h] BYREF
  int v50; // [esp+E0h] [ebp-4h]

  v2 = a2;
  v3 = this;
  v43 = a2;
  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 2);
    LOBYTE(v36) = 0;
    if ( v4 )
      v4 = (*((_DWORD *)a2 + 3) - v4) / 20;
    v5 = *((_DWORD *)this + 1001);
    v6 = (char *)this + 4000;
    v7 = v5 ? (*((_DWORD *)this + 1002) - v5) >> 2 : 0;
    if ( v4 == v7 )
    {
      v8 = *((_DWORD *)a2 + 2);
      if ( v8 )
        v8 = (*((_DWORD *)a2 + 3) - v8) / 20;
      v9 = v8 - 1;
      if ( v8 - 1 >= 0 )
      {
        v10 = 20 * v9;
        for ( i = 20 * v9; ; v10 = i )
        {
          v11 = *((_DWORD *)a2 + 2);
          if ( !v11 || v9 >= (*((_DWORD *)a2 + 3) - v11) / 20 )
            _invalid_parameter_noinfo();
          v12 = *((_DWORD *)v6 + 1);
          v13 = (int)*(float *)(*((_DWORD *)a2 + 2) + v10 + 8);
          if ( !v12 || v9 >= (*((_DWORD *)v6 + 2) - v12) >> 2 )
            _invalid_parameter_noinfo();
          v14 = *((_DWORD *)v6 + 1);
          if ( v13 != *(_DWORD *)(v14 + 4 * v9) )
            LOBYTE(v36) = 1;
          if ( !v14 || v9 >= (*((_DWORD *)v6 + 2) - v14) >> 2 )
            _invalid_parameter_noinfo();
          i -= 20;
          *(_DWORD *)(*((_DWORD *)v6 + 1) + 4 * v9--) = v13;
          if ( (v9 & 0x80000000) != 0 )
            break;
        }
        v3 = this;
      }
    }
    else
    {
      LOBYTE(v36) = 1;
    }
    v41 = 0.0;
    v40 = 0.0;
    if ( (_BYTE)v36 )
    {
      CFormatedStatic::ClearText(*((CFormatedStatic **)v3 + 1005));
      v15 = (void *)*((_DWORD *)v6 + 2);
      if ( *((_DWORD *)v6 + 1) > (unsigned int)v15 )
        _invalid_parameter_noinfo();
      v16 = (void *)*((_DWORD *)v6 + 1);
      if ( (unsigned int)v16 > *((_DWORD *)v6 + 2) )
        _invalid_parameter_noinfo();
      sub_10007D8D((int)v42, (int)v6, v16, (int)v6, v15);
      v17 = *((_DWORD *)a2 + 2);
      if ( v17 )
        v17 = (*((_DWORD *)a2 + 3) - v17) / 20;
      v18 = v17 - 1;
      v38 = v17 - 1;
      if ( v17 - 1 >= 0 )
      {
        v19 = 20 * v18;
        v36 = 20 * v18;
        while ( 1 )
        {
          v20 = *((_DWORD *)v2 + 2);
          if ( !v20 || v18 >= (*((_DWORD *)v2 + 3) - v20) / 20 )
            _invalid_parameter_noinfo();
          v21 = *((_DWORD *)v2 + 2);
          v22 = *(float *)(v21 + v19 + 8);
          v23 = v19 + v21;
          v24 = (void *)*((_DWORD *)v6 + 1);
          v25 = (unsigned int)v24 <= *((_DWORD *)v6 + 2);
          v42[0] = (int)v22;
          if ( !v25 )
            _invalid_parameter_noinfo();
          sub_1001A564((int)&v44, (int)v6, v24, (int)v42);
          sub_10011A4F(Buffer, (size_t)L"%d", (int)v22);
          switch ( *(_DWORD *)v23 )
          {
            case 1:
              std::wstring::wstring(v46, Buffer);
              v29 = *((_DWORD *)this + 1005);
              v50 = 0;
              CFormatedStatic::AppendText(v29, v46, dword_103B428C);
              v27 = v46;
              break;
            case 2:
              std::wstring::wstring(v45, Buffer);
              v28 = *((_DWORD *)this + 1005);
              v50 = 1;
              CFormatedStatic::AppendText(v28, v45, dword_103B4290);
              v27 = v45;
              break;
            case 4:
              std::wstring::wstring(v48, Buffer);
              v26 = *((_DWORD *)this + 1005);
              v50 = 2;
              CFormatedStatic::AppendText(v26, v48, dword_103B4294);
              v27 = v48;
              break;
            default:
              goto LABEL_49;
          }
          v50 = -1;
          std::wstring::~wstring(v27);
LABEL_49:
          v30 = v38;
          if ( v38 )
          {
            std::wstring::wstring(v47, L"\\");
            v31 = *((_DWORD *)this + 1005);
            v50 = 3;
            CFormatedStatic::AppendText(v31, v47, -1);
            v50 = -1;
            std::wstring::~wstring(v47);
          }
          v36 -= 20;
          --v38;
          v40 = (double)*(int *)(v23 + 4) + v40;
          v41 = v41 + *(float *)(v23 + 8);
          if ( (int)(v30 - 1) < 0 )
            break;
          v19 = v36;
          v2 = v43;
          v18 = v38;
        }
      }
      v32 = (int *)*((_DWORD *)this + 1009);
      if ( v40 <= 0.00009999999747378752 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v32 + 140))(v32) )
          *(_DWORD *)(*((_DWORD *)this + 1009) + 564) = -1;
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 1010) + 140))(*((_DWORD *)this + 1010)) )
          *(_DWORD *)(*((_DWORD *)this + 1010) + 564) = -1;
      }
      else
      {
        v33 = *v32;
        v42[0] = (unsigned __int16)v36 | 0xC00;
        v34 = *(unsigned __int8 (__thiscall **)(int *))(v33 + 140);
        v42[0] = (int)(v41 / v40 * 255.0);
        v35 = v42[0];
        if ( v34(v32) )
          *(_DWORD *)(*((_DWORD *)this + 1009) + 564) = v35 | ((v35 | 0xFFFFFF00) << 8);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 1010) + 140))(*((_DWORD *)this + 1010)) )
          *(_DWORD *)(*((_DWORD *)this + 1010) + 564) = v35 | ((v35 | 0xFFFFFF00) << 8);
      }
    }
  }
}
