/*
 * func-name: sub_102A5C00
 * func-address: 0x102a5c00
 * callers: 0x1000de36
 * callees: none
 */

void __thiscall sub_102A5C00(_DWORD *this)
{
  int v2; // eax
  int Text; // eax
  _BYTE v4[28]; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v5[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v6[28]; // [esp+44h] [ebp-28h] BYREF
  int v7; // [esp+68h] [ebp-4h]

  this[175] = 217;
  this[176] = 110;
  std::string::string(v4, "DlgDatabase.xml");
  v7 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v7 = -1;
  std::string::~string(v4);
  this[184] = sub_1000AF33;
  std::wstring::wstring(v5, L"WAITRELIVE_WAITING");
  v7 = 1;
  Text = Precacher::GetText(v6, v5);
  LOBYTE(v7) = 2;
  std::wstring::operator=(this + 1003, Text);
  LOBYTE(v7) = 1;
  std::wstring::~wstring(v6);
  v7 = -1;
  std::wstring::~wstring(v5);
}
