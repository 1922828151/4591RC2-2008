/*
 * func-name: ?Initialize@CGroupQuickCallUI@@QAEXXZ_0
 * func-address: 0x102742c0
 * callers: 0x1000cfb3
 * callees: 0x10005b23
 */

void __thiscall CGroupQuickCallUI::Initialize(CGroupQuickCallUI *this)
{
  int v2; // eax
  int v3; // [esp+Ch] [ebp-2Ch] BYREF
  _BYTE v4[28]; // [esp+10h] [ebp-28h] BYREF
  int v5; // [esp+34h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v4, "DlgDatabase.xml");
  v5 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v5 = -1;
  std::string::~string(v4);
  *((_DWORD *)this + 173) = 173;
  *((_DWORD *)this + 174) = 262;
  CTYDialog::MoveNestedDialog(this);
  *((_DWORD *)this + 184) = CGroupQuickCallUI::GroupQuckCallUIEvent;
  v3 = 42;
  *(_DWORD *)sub_10005B23((int)&v3) = 1;
  v3 = 43;
  *(_DWORD *)sub_10005B23((int)&v3) = 2;
  v3 = 44;
  *(_DWORD *)sub_10005B23((int)&v3) = 3;
  v3 = 45;
  *(_DWORD *)sub_10005B23((int)&v3) = 4;
}
