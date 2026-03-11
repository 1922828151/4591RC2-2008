/*
 * func-name: ?SetBody@CDropBagUI@@IAEXKPBVFProductInfo@GameClient@@@Z_0
 * func-address: 0x1026c470
 * callers: 0x1000bbea
 * callees: 0x1000970a, 0x1001607c, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall CDropBagUI::SetBody(CDropBagUI *this, unsigned int a2, const struct GameClient::FProductInfo *a3)
{
  struct CREControl *Control; // eax
  int v5; // edi
  const char *v6; // eax
  const wchar_t *v7; // eax
  _DWORD v8[4]; // [esp-24h] [ebp-2Ch] BYREF
  int v9; // [esp-14h] [ebp-1Ch]
  int v10; // [esp-10h] [ebp-18h]
  void ***v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  int v13; // [esp-4h] [ebp-Ch]
  _DWORD *retaddr; // [esp+8h] [ebp+0h]

  v13 = 0;
  v11 = &CREControl `RTTI Type Descriptor';
  v10 = 0;
  v9 = 1;
  *((_DWORD *)this + 968) = a2;
  Control = CREDialog::GetControl(this, v9);
  v12 = 0;
  v5 = _RTDynamicCast(Control, v9, v10, v11);
  v6 = (const char *)std::string::c_str(a2 + 176);
  v7 = atow(v6);
  retaddr = v8;
  std::wstring::wstring(v8, v7);
  CPictureLabel::ChangeTexture(v5, v8[0], v8[1], v8[2], v8[3], v9, v10, v11, v12);
  CDropBagUI::RefreshSuiteStatus(this);
  CDropBagUI::RefreshEquipCount(this);
}
