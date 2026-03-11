/*
 * func-name: sub_10270570
 * func-address: 0x10270570
 * callers: 0x1000a7d6
 * callees: 0x1000adc6, 0x1000dafd, 0x1000ef48, 0x10011a3b, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall sub_10270570(int this, unsigned int a2)
{
  GameClient::EstabManager *v3; // eax
  struct GameClient::Establishment *Establishment; // edi
  int ShowName; // eax
  const char *v6; // eax
  const wchar_t *v7; // eax
  struct CREControl *Control; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  const char *v12; // eax
  const wchar_t *v13; // eax
  _DWORD v14[4]; // [esp-24h] [ebp-84h] BYREF
  int v15; // [esp-14h] [ebp-74h]
  int v16; // [esp-10h] [ebp-70h]
  int v17; // [esp-Ch] [ebp-6Ch]
  struct tagRECT *p_rc; // [esp-8h] [ebp-68h]
  unsigned int v19; // [esp-4h] [ebp-64h]
  struct tagRECT rc; // [esp+8h] [ebp-58h] BYREF
  _BYTE v21[24]; // [esp+1Ch] [ebp-44h] BYREF
  int v22; // [esp+34h] [ebp-2Ch] BYREF
  _BYTE v23[28]; // [esp+38h] [ebp-28h] BYREF
  int v24; // [esp+58h] [ebp-8h]
  int v25; // [esp+5Ch] [ebp-4h]
  _DWORD *retaddr; // [esp+60h] [ebp+0h]

  v19 = a2;
  *(_DWORD *)(this + 3900) = a2;
  v3 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v3, v19);
  if ( Establishment )
  {
    ShowName = GameClient::Establishment::GetShowName(v21);
    v25 = 0;
    v6 = (const char *)std::string::c_str(ShowName);
    v7 = atow(v6);
    CREStatic::SetText(*(CREStatic **)(this + 3880), v7);
    v25 = -1;
    std::string::~string(v21);
    v19 = 0;
    Control = CREDialog::GetControl((CREDialog *)this, 3);
    v9 = _RTDynamicCast(Control, v15, 0, &CREControl `RTTI Type Descriptor');
    SetRect(&rc, 0, 0, 95, 72);
    v10 = *((_DWORD *)Establishment + 27);
    p_rc = &rc;
    v11 = sub_10011A3B(&v22, v10);
    v24 = 1;
    v12 = (const char *)std::string::c_str(v11);
    v13 = atow(v12);
    retaddr = v14;
    std::wstring::wstring(v14, v13);
    CPictureLabel::ChangeTexture(v9, v14[0], v14[1], v14[2], v14[3], v15, v16, v17, p_rc);
    v25 = -1;
    std::string::~string(v23);
  }
}
