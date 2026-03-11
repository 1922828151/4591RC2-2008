/*
 * func-name: ?OnBegin@PassInputedObserver@@UAEXAAVEvent@@@Z_0
 * func-address: 0x1026fa40
 * callers: 0x1000952f
 * callees: 0x10008297, 0x102c9ea8
 */

void __thiscall PassInputedObserver::OnBegin(PassInputedObserver *this, struct Event *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  CEstablishmentUI *v4; // edi
  int v5; // esi
  struct BinStream *Stream; // eax
  int v7; // ecx

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  v4 = (CEstablishmentUI *)_RTDynamicCast(
                             Dialog,
                             0,
                             &CTYDialog `RTTI Type Descriptor',
                             &CEstablishmentUI `RTTI Type Descriptor');
  if ( v4 )
  {
    v5 = 0;
    Stream = Event::GetStream(a2);
    v7 = *((_DWORD *)Stream + 3);
    if ( (unsigned int)(v7 + 4) <= *((_DWORD *)Stream + 2) )
    {
      v5 = *(_DWORD *)(v7 + *((_DWORD *)Stream + 1));
      *((_DWORD *)Stream + 3) = v7 + 4;
    }
    CEstablishmentUI::PasswordInputed(v4, v5);
  }
}
