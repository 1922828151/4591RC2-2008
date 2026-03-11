/*
 * func-name: ?SetEnergy@CRobotRoofUI@@AAEXKPBVFProductInfo@GameClient@@@Z_0
 * func-address: 0x10283960
 * callers: 0x10008f26
 * callees: 0x10001e60, 0x100104e2, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::SetEnergy(CRobotRoofUI *this, unsigned int a2, const struct GameClient::FProductInfo *a3)
{
  struct CREControl *Control; // eax
  int v5; // edi
  const char *v6; // eax
  const wchar_t *v7; // eax
  int v8; // eax
  CREStatic *v9; // ecx
  _DWORD v10[4]; // [esp-24h] [ebp-2Ch] BYREF
  int v11; // [esp-14h] [ebp-1Ch]
  int v12; // [esp-10h] [ebp-18h]
  void ***v13; // [esp-Ch] [ebp-14h]
  int v14; // [esp-8h] [ebp-10h]
  const wchar_t *v15; // [esp-4h] [ebp-Ch]
  _DWORD *retaddr; // [esp+8h] [ebp+0h]

  v15 = 0;
  v13 = &CREControl `RTTI Type Descriptor';
  v12 = 0;
  v11 = 13;
  *((_DWORD *)this + 981) = a2;
  Control = CREDialog::GetControl(this, v11);
  v14 = 0;
  v5 = _RTDynamicCast(Control, v11, v12, v13);
  v6 = (const char *)std::string::c_str(a2 + 176);
  v7 = atow(v6);
  retaddr = v10;
  std::wstring::wstring(v10, v7);
  CPictureLabel::ChangeTexture(v5, v10[0], v10[1], v10[2], v10[3], v11, v12, v13, v14);
  CRobotRoofUI::RefreshSuiteStatus(this);
  v8 = *((_DWORD *)this + 998);
  if ( v8 && *((_DWORD *)this + 1003) != -1 )
    CRobotRoofUI::UnSelectCell(v8, *((_DWORD *)this + 1003));
  v9 = (CREStatic *)*((_DWORD *)this + 972);
  v15 = word_10322F2C;
  *((_DWORD *)this + 1007) = -1;
  *((_DWORD *)this + 998) = 0;
  CREStatic::SetText(v9, v15);
}
