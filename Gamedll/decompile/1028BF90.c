/*
 * func-name: sub_1028BF90
 * func-address: 0x1028bf90
 * callers: 0x1000bb27
 * callees: 0x10013e08, 0x102c9ea8
 */

void __stdcall sub_1028BF90(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  CDlgMgr *v4; // eax
  struct CTYDialog *Dialog; // eax
  CStatusUI *v6; // eax

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v3 = (unsigned int)a1;
  }
  else
  {
    v3 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  v4 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v4);
  v6 = (CStatusUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CStatusUI `RTTI Type Descriptor');
  if ( v6 )
    CStatusUI::OnUseSkill(v6, v3);
}
