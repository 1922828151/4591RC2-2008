/*
 * func-name: sub_102729C0
 * func-address: 0x102729c0
 * callers: 0x10011306
 * callees: 0x10013e85, 0x102c9ea8
 */

void __stdcall sub_102729C0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // ebx
  CDlgMgr *v4; // eax
  struct CTYDialog *Dialog; // eax
  CTYDialog *v6; // eax
  CGroupMemberUI *v7; // esi
  CDlgMgr *v8; // eax

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
  v6 = (CTYDialog *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CGroupMemberUI `RTTI Type Descriptor');
  v7 = v6;
  if ( v6 )
  {
    if ( !(unsigned __int8)CTYDialog::GetVisible(v6) )
    {
      v8 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v8);
    }
    CGroupMemberUI::OnMemberUpdated(v7, v3);
  }
}
