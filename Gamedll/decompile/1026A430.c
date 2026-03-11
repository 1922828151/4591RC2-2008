/*
 * func-name: ?CancelByPlayer@CDropBagUI@@UAE_NXZ_0
 * func-address: 0x1026a430
 * callers: 0x10006a64
 * callees: 0x1000dc0b
 */

char __thiscall CDropBagUI::CancelByPlayer(CItemHolder **this)
{
  CItemHolder::ClearCellSelection(this[987]);
  CItemHolder::ClearCellSelection(this[988]);
  CDropBagUI::ShowBag((CDropBagUI *)this);
  return 1;
}
