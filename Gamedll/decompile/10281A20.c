/*
 * func-name: ?UnSelectCell@CRobotRoofUI@@AAEXW4SELECT_TYPE@1@H@Z_0
 * func-address: 0x10281a20
 * callers: 0x10001e60
 * callees: none
 */

void __thiscall CRobotRoofUI::UnSelectCell(CItemHolder **this, int a2, int a3)
{
  if ( a2 == 2 )
  {
    if ( CItemHolder::GetXYByPos(this[969], a3, &a2, &a3) )
      CItemHolder::UnSelectCell(this[969], a2, a3);
  }
  else if ( a2 == 3 && CItemHolder::GetXYByPos(this[970], a3, &a2, &a3) )
  {
    CItemHolder::UnSelectCell(this[970], a2, a3);
  }
}
