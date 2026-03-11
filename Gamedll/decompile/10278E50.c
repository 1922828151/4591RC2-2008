/*
 * func-name: ?OK@CPasswordInputUI@@QAEXXZ_0
 * func-address: 0x10278e50
 * callers: 0x100122ab
 * callees: 0x1000a0b5, 0x1001816a
 */

void __thiscall CPasswordInputUI::OK(CPasswordInputUI *this)
{
  int v2; // eax
  Event *v3; // esi
  int Pass; // edi
  struct BinStream *Stream; // esi
  CDlgMgr *v6; // eax

  if ( *((_BYTE *)this + 3876) )
  {
    CPasswordInputUI::SendPass(this);
  }
  else
  {
    v2 = EventAttemper::Instance(9, 4201);
    v3 = (Event *)EventAttemper::AddEvent(v2);
    Pass = CPasswordInputUI::GetPass(this);
    Stream = Event::GetStream(v3);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = Pass;
    *((_DWORD *)Stream + 2) += 4;
    v6 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v6);
  }
}
