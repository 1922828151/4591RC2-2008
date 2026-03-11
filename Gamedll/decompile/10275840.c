/*
 * func-name: ?Initialize@CHallMapUI@@QAEXXZ_0
 * func-address: 0x10275840
 * callers: 0x10009165
 * callees: none
 */

void __thiscall CHallMapUI::Initialize(CHallMapUI *this)
{
  int v2; // eax
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v3, "DlgDatabase.xml");
  v4 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v4 = -1;
  std::string::~string(v3);
  *((_DWORD *)this + 184) = CHallMapUI::HallMapUIEvent;
  CREDialog::AddDlgFrontOfMe(this, 19);
  CREDialog::AddDlgFrontOfMe(this, 20);
  CREDialog::AddDlgFrontOfMe(this, 11);
}
