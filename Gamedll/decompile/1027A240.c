/*
 * func-name: sub_1027A240
 * func-address: 0x1027a240
 * callers: 0x10003b25
 * callees: none
 */

void __thiscall sub_1027A240(_DWORD *this)
{
  int v2; // eax
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  this[175] = 217;
  this[176] = 110;
  std::string::string(v3, "DlgDatabase.xml");
  v4 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v4 = -1;
  std::string::~string(v3);
  this[184] = sub_1001AAC3;
}
