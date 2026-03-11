/*
 * func-name: sub_1025C5D0
 * func-address: 0x1025c5d0
 * callers: 0x1000bb81
 * callees: 0x1000b799
 */

int sub_1025C5D0()
{
  int v0; // eax
  int v2; // [esp+4h] [ebp-30h]
  int v3; // [esp+8h] [ebp-2Ch]
  _BYTE v4[28]; // [esp+Ch] [ebp-28h] BYREF
  int v5; // [esp+30h] [ebp-4h]

  std::string::string(v4, "DlgDatabase.xml");
  v5 = 0;
  v0 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v0);
  v5 = -1;
  std::string::~string(v4);
  return sub_1000B799(v2, v3);
}
