/*
 * func-name: ?AddMessage@CChatMessageUI@@QAEXW4CHANNEL_TYPE@GameClient@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z_0
 * func-address: 0x10259e60
 * callers: 0x1000b42e
 * callees: 0x100092f5, 0x10011a4f, 0x10019dee, 0x102c8d6c, 0x102c9d62, 0x102c9ea2
 */

void __thiscall CChatMessageUI::AddMessage(_DWORD *this, int a2, int a3, int a4)
{
  const char *v5; // eax
  wchar_t v6; // ax
  const char *v7; // eax
  const wchar_t *v8; // eax
  float v9; // [esp+10h] [ebp-820h]
  float v10; // [esp+10h] [ebp-820h]
  float v11; // [esp+10h] [ebp-820h]
  float v12; // [esp+14h] [ebp-81Ch]
  float v13; // [esp+14h] [ebp-81Ch]
  float v14; // [esp+14h] [ebp-81Ch]
  float v15; // [esp+18h] [ebp-818h]
  float v16; // [esp+18h] [ebp-818h]
  float v17; // [esp+18h] [ebp-818h]
  float v18; // [esp+1Ch] [ebp-814h]
  float v19; // [esp+1Ch] [ebp-814h]
  float v20; // [esp+1Ch] [ebp-814h]
  float v21; // [esp+20h] [ebp-810h] BYREF
  float v22; // [esp+24h] [ebp-80Ch] BYREF
  float v23; // [esp+28h] [ebp-808h]
  float v24; // [esp+2Ch] [ebp-804h]
  float v25; // [esp+30h] [ebp-800h]
  _BYTE v26[28]; // [esp+34h] [ebp-7FCh] BYREF
  wchar_t Buffer[1000]; // [esp+50h] [ebp-7E0h] BYREF
  int v28; // [esp+82Ch] [ebp-4h]

  std::wstring::wstring(v26);
  v22 = 1.0;
  v23 = 1.0;
  v24 = 1.0;
  v25 = 1.0;
  v28 = 0;
  switch ( a2 )
  {
    case 2:
      std::wstring::operator+=(v26, &unk_10320B78);
      v21 = 0.003921568859368563 * 0.0;
      v9 = v21;
      v12 = 1.0;
      v18 = 1.0;
      v15 = v21;
      goto LABEL_13;
    case 3:
      std::wstring::operator+=(v26, &unk_10320B94);
      v21 = 0.0;
      sub_10019DEE(10, (int)&v21);
      if ( v21 != 0.0 )
        CGroupMemberUI::OnMemberCall(a3);
      v21 = 0.003921568859368563 * 0.0;
      v10 = v21;
      v13 = 1.0;
      v19 = 1.0;
      v16 = v21;
      goto LABEL_5;
    case 4:
      std::wstring::operator+=(v26, &unk_10320B8C);
      v11 = 1.0;
      v14 = 0.49019611;
      v17 = 0.003921568859368563 * 0.0;
      v20 = 1.0;
      goto LABEL_7;
    case 5:
      std::wstring::operator+=(v26, &unk_10320B84);
      v10 = 0.003921568859368563 * 0.0;
      v13 = 0.49019611;
      v16 = 1.0;
      v19 = 1.0;
LABEL_5:
      v22 = v10;
      v23 = v13;
      v24 = v16;
      v25 = v19;
      break;
    case 9:
      std::wstring::operator+=(v26, &unk_10320B6C);
      break;
    case 10:
      std::wstring::operator+=(v26, &unk_10320BA0);
      v21 = 0.003921568859368563 * 0.0;
      v11 = v21;
      v14 = 1.0;
      v20 = 1.0;
      v17 = v21;
LABEL_7:
      v22 = v11;
      v23 = v14;
      v24 = v17;
      v25 = v20;
      break;
    case 11:
      std::wstring::operator+=(v26, &unk_10320BAC);
      v9 = 1.0;
      v21 = 0.003921568859368563 * 0.0;
      v12 = v21;
      v15 = v21;
      v18 = 1.0;
LABEL_13:
      v22 = v9;
      v25 = v18;
      v24 = v15;
      v23 = v12;
      break;
    default:
      break;
  }
  if ( *(_DWORD *)(a3 + 20) )
  {
    memset(Buffer, 0, sizeof(Buffer));
    v5 = (const char *)std::string::c_str(a3);
    v6 = (unsigned __int16)atow(v5);
    sub_10011A4F(Buffer, (size_t)&unk_10320BB8, v6);
    std::wstring::operator+=(v26, Buffer);
  }
  v7 = (const char *)std::string::c_str(a4);
  v8 = atow(v7);
  std::wstring::operator+=(v26, v8);
  CMultiLineStatic::AddLine(this[968], v26, &v22);
  v28 = -1;
  std::wstring::~wstring(v26);
}
