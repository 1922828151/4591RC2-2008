/*
 * func-name: ?SetMessageSize@CDlgMgr@@QAEXHH@Z
 * func-address: 0x101494f0
 * callers: none
 * callees: none
 */

void __thiscall CDlgMgr::SetMessageSize(CDlgMgr *this, int a2, int a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 5);
  *(_DWORD *)(v3 + 700) = a2;
  *(_DWORD *)(v3 + 704) = a3;
}
