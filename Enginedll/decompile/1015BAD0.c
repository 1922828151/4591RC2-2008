/*
 * func-name: sub_1015BAD0
 * func-address: 0x1015bad0
 * callers: 0x1015bb60
 * callees: 0x1014a3e0, 0x1014c910
 */

int __thiscall sub_1015BAD0(CREDialog *this)
{
  CDlgMgr *v2; // eax
  int result; // eax
  int v4[7]; // [esp+4h] [ebp-28h] BYREF
  int v5; // [esp+28h] [ebp-4h]

  *((_DWORD *)this + 175) = 217;
  *((_DWORD *)this + 176) = 110;
  std::string::string(v4, "DlgDatabase.xml");
  v5 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2, this, (int)v4, 0);
  v5 = -1;
  result = std::string::~string(v4);
  *((_DWORD *)this + 184) = sub_1015B9F0;
  return result;
}
