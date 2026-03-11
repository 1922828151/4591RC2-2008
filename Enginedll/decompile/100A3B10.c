/*
 * func-name: ?ContainsPoint@CRESlider@@UAEHUtagPOINT@@@Z
 * func-address: 0x100a3b10
 * callers: none
 * callees: none
 */

BOOL __thiscall CRESlider::ContainsPoint(CRESlider *this, POINT pt)
{
  BOOL result; // eax

  if ( PtInRect((const RECT *)((char *)this + 164), pt) )
    return 1;
  result = PtInRect((const RECT *)((char *)this + 564), pt);
  if ( result )
    return 1;
  return result;
}
