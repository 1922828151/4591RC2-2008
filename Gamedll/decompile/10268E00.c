/*
 * func-name: ?OnRender@CDropBagUI@@UAEJM@Z_0
 * func-address: 0x10268e00
 * callers: 0x10014056
 * callees: none
 */

int __thiscall CDropBagUI::OnRender(CDropBagUI *this, float a2)
{
  int v3; // eax
  CDlgMgr *v4; // eax

  v3 = RenderDevice::Instance(this);
  if ( *((_DWORD *)this + 173) >= (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 296))(v3) + 26 )
  {
    v4 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v4);
  }
  return CTYDialog::OnRender(this, a2);
}
