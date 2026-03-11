/*
 * func-name: ?ChangeForceMouseVisible@CDlgMgr@@QAEXXZ
 * func-address: 0x100a2ef0
 * callers: none
 * callees: none
 */

void __thiscall CDlgMgr::ChangeForceMouseVisible(CDlgMgr *this)
{
  *((_BYTE *)this + 128) = *((_BYTE *)this + 128) == 0;
}
