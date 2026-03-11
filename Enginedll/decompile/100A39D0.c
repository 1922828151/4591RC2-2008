/*
 * func-name: ?ContainsPoint@CRECheckBox@@UAEHUtagPOINT@@@Z
 * func-address: 0x100a39d0
 * callers: none
 * callees: none
 */

BOOL __thiscall CRECheckBox::ContainsPoint(CRECheckBox *this, POINT pt)
{
  BOOL result; // eax

  if ( PtInRect((const RECT *)((char *)this + 164), pt) )
    return 1;
  result = PtInRect((const RECT *)((char *)this + 820), pt);
  if ( result )
    return 1;
  return result;
}
