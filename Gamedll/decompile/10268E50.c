/*
 * func-name: ?UnSelectCell@CDropBagUI@@IAEX_NH@Z_0
 * func-address: 0x10268e50
 * callers: 0x10003e1d
 * callees: none
 */

void __thiscall CDropBagUI::UnSelectCell(CItemHolder **this, int a2, int a3)
{
  if ( (_BYTE)a2 )
  {
    if ( (unsigned __int8)a2 == 1 && CItemHolder::GetXYByPos(this[987], a3, &a3, &a2) )
      CItemHolder::UnSelectCell(this[987], a3, a2);
  }
  else if ( CItemHolder::GetXYByPos(this[988], a3, &a3, &a2) )
  {
    CItemHolder::UnSelectCell(this[988], a3, a2);
  }
}
