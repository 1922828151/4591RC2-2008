/*
 * func-name: ?ImbileEnergyRes@CDropBagUI@@QAEX_N@Z_0
 * func-address: 0x10268b20
 * callers: 0x10008ee5
 * callees: 0x102c9d62, 0x102c9ea8
 */

void __thiscall CDropBagUI::ImbileEnergyRes(CDropBagUI *this, bool a2)
{
  struct CREControl *Control; // eax
  CREStatic *v4; // esi
  _BYTE *v5; // ecx
  const wchar_t *v6; // eax
  int v7; // [esp-10h] [ebp-9Ch]
  _BYTE v8[24]; // [esp+10h] [ebp-7Ch] BYREF
  _BYTE v9[4]; // [esp+28h] [ebp-64h] BYREF
  _BYTE v10[24]; // [esp+2Ch] [ebp-60h] BYREF
  _BYTE v11[4]; // [esp+44h] [ebp-48h] BYREF
  _BYTE v12[24]; // [esp+48h] [ebp-44h] BYREF
  _BYTE v13[28]; // [esp+60h] [ebp-2Ch] BYREF
  int v14; // [esp+88h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+8Ch] [ebp+0h]

  std::wstring::wstring(v9, L"BOOTY_BEGIN_IMBILE");
  v14 = 0;
  Precacher::GetText(v13, v9);
  std::wstring::~wstring(v10);
  std::wstring::wstring(v8, L"BOOTY_END_IMBILE");
  Precacher::GetText(v12, v8);
  LOBYTE(retaddr) = 5;
  std::wstring::~wstring(v8);
  Control = CREDialog::GetControl(this, 4);
  v4 = (CREStatic *)_RTDynamicCast(Control, v7, 0, &CREControl `RTTI Type Descriptor');
  v5 = v11;
  if ( !a2 )
    v5 = v13;
  v6 = (const wchar_t *)std::wstring::c_str(v5);
  CREStatic::SetText(v4, v6);
  LOBYTE(v14) = 2;
  std::wstring::~wstring(v11);
  v14 = -1;
  std::wstring::~wstring(v13);
}
