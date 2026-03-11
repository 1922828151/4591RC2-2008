/*
 * func-name: ?MsgProc@CItemHolder@@UAE_NIIJ@Z
 * func-address: 0x1014ffb0
 * callers: none
 * callees: 0x100a2ff0
 */

char __thiscall CItemHolder::MsgProc(CItemHolder *this, unsigned int a2, unsigned int a3, int a4)
{
  CREDialog *v5; // eax

  if ( a2 != 4864 && a2 != 4865 )
    return 0;
  v5 = (CREDialog *)*((_DWORD *)this + 28);
  if ( v5 )
    CREDialog::SendEvent(v5, a2, 1, this, a3, a4);
  return 1;
}
