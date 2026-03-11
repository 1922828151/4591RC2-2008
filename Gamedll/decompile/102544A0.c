/*
 * func-name: ?OnMapStatusUpdated@CBattleFieldDetailUI@@QAEXJ@Z_0
 * func-address: 0x102544a0
 * callers: 0x1000f44d
 * callees: 0x1000a105, 0x10011a4f, 0x100125d5, 0x102c9d62, 0x102c9fe0
 */

void __thiscall CBattleFieldDetailUI::OnMapStatusUpdated(CBattleFieldDetailUI *this, int a2)
{
  int v3; // eax
  const struct GameClient::BATTLE_FIELD_INFO *BattleFieldIntro; // eax
  char *v5; // esi
  _DWORD *v6; // edi
  _DWORD *i; // edi
  _DWORD *v8; // ebx
  void (__cdecl *v9)(_BYTE *, _BYTE *); // ebx
  int v10; // edi
  _BYTE *v11; // ecx
  const wchar_t *v12; // eax
  char *v13; // ebx
  char *v14; // ebx
  char *v15; // ebp
  int v16; // ebx
  int v17; // esi
  size_t v18; // eax
  const struct GameClient::BATTLE_FIELD_INFO *v19; // [esp+14h] [ebp-250h]
  int v20; // [esp+14h] [ebp-250h]
  float v21; // [esp+14h] [ebp-250h]
  int Format; // [esp+18h] [ebp-24Ch]
  int v23; // [esp+1Ch] [ebp-248h]
  char *v24; // [esp+20h] [ebp-244h] BYREF
  int v25; // [esp+24h] [ebp-240h]
  int v26; // [esp+28h] [ebp-23Ch] BYREF
  int v27; // [esp+2Ch] [ebp-238h]
  int v28; // [esp+30h] [ebp-234h]
  CBattleFieldDetailUI *v29; // [esp+34h] [ebp-230h]
  _BYTE v30[28]; // [esp+38h] [ebp-22Ch] BYREF
  _BYTE v31[28]; // [esp+54h] [ebp-210h] BYREF
  _BYTE v32[28]; // [esp+70h] [ebp-1F4h] BYREF
  _BYTE v33[28]; // [esp+8Ch] [ebp-1D8h] BYREF
  _BYTE v34[28]; // [esp+A8h] [ebp-1BCh] BYREF
  wchar_t Buffer[200]; // [esp+C4h] [ebp-1A0h] BYREF
  int v36; // [esp+260h] [ebp-4h]

  v3 = *((_DWORD *)this + 968);
  v29 = this;
  if ( v3 == a2 )
  {
    CREStatic::SetText(*((CREStatic **)this + 972), word_10320404);
    CREStatic::SetText(*((CREStatic **)this + 971), word_10320408);
    BattleFieldIntro = GameClient::BattleFieldManager::GetBattleFieldIntro(
                         GameClient::BattleFieldManager::s_pInstance,
                         *((_DWORD *)this + 968),
                         1);
    v19 = BattleFieldIntro;
    if ( BattleFieldIntro )
    {
      v5 = (char *)BattleFieldIntro + 140;
      v6 = (_DWORD *)**((_DWORD **)BattleFieldIntro + 36);
      v28 = 0;
      while ( v6 != *((_DWORD **)v5 + 1) )
      {
        v28 += v6[3];
        if ( v6 == *((_DWORD **)v5 + 1) )
          _invalid_parameter_noinfo();
        v6 = (_DWORD *)*v6;
      }
      for ( i = (_DWORD *)**((_DWORD **)v5 + 1); ; i = (_DWORD *)*i )
      {
        v8 = (_DWORD *)*((_DWORD *)v5 + 1);
        if ( !v5 )
          _invalid_parameter_noinfo();
        if ( i == v8 )
          break;
        if ( !v5 )
          _invalid_parameter_noinfo();
        if ( i == *((_DWORD **)v5 + 1) )
        {
          _invalid_parameter_noinfo();
          if ( i == *((_DWORD **)v5 + 1) )
            _invalid_parameter_noinfo();
        }
      }
      std::wstring::wstring(v30, L"BATTLEFIEDDETAIL_STATUS");
      v9 = (void (__cdecl *)(_BYTE *, _BYTE *))Precacher::GetText;
      v10 = 0;
      v36 = 0;
      Precacher::GetText(v33, v30);
      LOBYTE(v36) = 2;
      std::wstring::~wstring(v30);
      v20 = *((_DWORD *)v19 + 44);
      if ( v20 && (v21 = (double)v28 / (double)v20, v21 >= 0.30000001) )
      {
        if ( v21 >= 0.60000002 )
        {
          std::wstring::wstring(v31, L"BATTLEFIEDDETAIL_STATUS_FULL");
          LOBYTE(v36) = 9;
          Precacher::GetText(v32, v31);
          LOBYTE(v36) = 11;
        }
        else
        {
          std::wstring::wstring(v31, L"BATTLEFIEDDETAIL_STATUS_NORMAL");
          LOBYTE(v36) = 6;
          Precacher::GetText(v32, v31);
          LOBYTE(v36) = 8;
        }
        std::wstring::~wstring(v31);
        std::wstring::operator+=(v33, v32);
        v11 = v32;
      }
      else
      {
        std::wstring::wstring(v32, L"BATTLEFIEDDETAIL_STATUS_EMPTY");
        LOBYTE(v36) = 3;
        Precacher::GetText(v31, v32);
        LOBYTE(v36) = 5;
        std::wstring::~wstring(v32);
        std::wstring::operator+=(v33, v31);
        v11 = v31;
      }
      LOBYTE(v36) = 2;
      std::wstring::~wstring(v11);
      v12 = (const wchar_t *)std::wstring::c_str(v33);
      CREStatic::SetText(*((CREStatic **)v29 + 971), v12);
      Format = 0;
      v23 = 0;
      if ( v28 )
      {
        v26 = 2;
        sub_100125D5((int)&v24, (int)&v26);
        v13 = v24;
        v27 = *((_DWORD *)v5 + 1);
        if ( !v24 || v24 != v5 )
          _invalid_parameter_noinfo();
        if ( v25 != v27 )
        {
          if ( !v13 )
            _invalid_parameter_noinfo();
          if ( v25 == *((_DWORD *)v13 + 1) )
            _invalid_parameter_noinfo();
          Format = *(_DWORD *)(v25 + 12);
        }
        v26 = 4;
        sub_100125D5((int)&v24, (int)&v26);
        v14 = v24;
        v27 = *((_DWORD *)v5 + 1);
        if ( !v24 || v24 != v5 )
          _invalid_parameter_noinfo();
        if ( v25 != v27 )
        {
          if ( !v14 )
            _invalid_parameter_noinfo();
          if ( v25 == *((_DWORD *)v14 + 1) )
            _invalid_parameter_noinfo();
          v23 = *(_DWORD *)(v25 + 12);
        }
        v26 = 8;
        sub_100125D5((int)&v24, (int)&v26);
        v15 = v24;
        v16 = *((_DWORD *)v5 + 1);
        if ( !v24 || v24 != v5 )
          _invalid_parameter_noinfo();
        v17 = v25;
        if ( v25 != v16 )
        {
          if ( !v15 )
            _invalid_parameter_noinfo();
          if ( v17 == *((_DWORD *)v15 + 1) )
            _invalid_parameter_noinfo();
          v10 = *(_DWORD *)(v17 + 12);
        }
        v9 = (void (__cdecl *)(_BYTE *, _BYTE *))Precacher::GetText;
      }
      std::wstring::wstring(v31, L"BATTLEFIEDDETAIL_COMPARE");
      LOBYTE(v36) = 12;
      v9(v34, v31);
      LOBYTE(v36) = 14;
      std::wstring::~wstring(v31);
      if ( Format || v23 || v10 )
      {
        *(float *)&v26 = (float)v28;
        Format = (int)((double)Format / *(float *)&v26 * 100.0);
      }
      v18 = std::wstring::c_str(v34);
      sub_10011A4F(Buffer, v18, Format);
      CREStatic::SetText(*((CREStatic **)v29 + 972), Buffer);
      LOBYTE(v36) = 2;
      std::wstring::~wstring(v34);
      v36 = -1;
      std::wstring::~wstring(v33);
    }
  }
}
