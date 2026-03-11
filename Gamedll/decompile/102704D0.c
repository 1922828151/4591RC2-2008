/*
 * func-name: sub_102704D0
 * func-address: 0x102704d0
 * callers: 0x1000f59c
 * callees: none
 */

void __thiscall sub_102704D0(CTYDialog *this)
{
  int v2; // eax
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 188;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v3, "DlgDatabase.xml");
  v4 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v4 = -1;
  std::string::~string(v3);
  *((_DWORD *)this + 184) = &sub_1000C8E2;
}
