/*
 * func-name: ?OnExploitUpdated@CHallMapUI@@QAEXXZ_0
 * func-address: 0x102748d0
 * callers: 0x10018b92
 * callees: 0x1000194c, 0x10011a4f, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CHallMapUI::OnExploitUpdated(CHallMapUI *this)
{
  int v2; // esi
  struct CREControl *Control; // eax
  CREStatic *v4; // edi
  size_t v5; // eax
  int v6; // [esp-14h] [ebp-130h]
  int v7; // [esp-8h] [ebp-124h]
  _BYTE v8[28]; // [esp+8h] [ebp-114h] BYREF
  _BYTE v9[4]; // [esp+24h] [ebp-F8h] BYREF
  _BYTE v10[24]; // [esp+28h] [ebp-F4h] BYREF
  wchar_t Buffer[102]; // [esp+40h] [ebp-DCh] BYREF
  int v12; // [esp+114h] [ebp-8h]
  int v13; // [esp+118h] [ebp-4h]

  v2 = sub_1000194C(0);
  if ( v2 )
  {
    Control = CREDialog::GetControl(this, 6);
    v4 = (CREStatic *)_RTDynamicCast(Control, v6, 0, &CREControl `RTTI Type Descriptor');
    std::wstring::wstring(v8, L"HALLMAP_EXPLOIT");
    v12 = 0;
    Precacher::GetText(v9, v8);
    LOBYTE(v12) = 2;
    std::wstring::~wstring(v8);
    v7 = *(_DWORD *)(v2 + 228);
    v5 = std::wstring::c_str(v9);
    sub_10011A4F(Buffer, v5, v7);
    CREStatic::SetText(v4, Buffer);
    v13 = -1;
    std::wstring::~wstring(v10);
  }
}
