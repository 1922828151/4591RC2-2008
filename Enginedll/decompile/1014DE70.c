/*
 * func-name: ?InitAllUI@CDlgMgr@@QAEXXZ
 * func-address: 0x1014de70
 * callers: none
 * callees: 0x100aef10, 0x100d6d20, 0x1014da70, 0x1015bb60, 0x101a2534
 */

void __thiscall CDlgMgr::InitAllUI(CDlgMgr *this)
{
  CREDialog *v2; // eax
  int v3; // eax
  struct GUISystem *v4; // eax
  _BYTE v5[28]; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+34h] [ebp-4h]

  v2 = (CREDialog *)operator new(0xFB0u);
  v6 = 0;
  if ( v2 )
    v3 = sub_1015BB60(v2);
  else
    v3 = 0;
  v6 = -1;
  *((_DWORD *)this + 5) = v3;
  v4 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, _DWORD))(*(_DWORD *)v4 + 48))(v4, *((_DWORD *)this + 5));
  CTYDialog::ShowDialog(*((CTYDialog **)this + 5), 0, 0.0);
  std::string::string(v5, &unk_101CC932);
  v6 = 1;
  CDlgMgr::LoadUIXML(this, (int)v5, 0);
  v6 = -1;
  std::string::~string(v5);
}
