/*
 * func-name: ?SetForceMouseVisible@CDlgMgr@@QAEX_N@Z
 * func-address: 0x100a2ee0
 * callers: none
 * callees: none
 */

void __thiscall CDlgMgr::SetForceMouseVisible(CDlgMgr *this, bool a2)
{
  *((_BYTE *)this + 128) = a2;
}
