/*
 * func-name: ?ContainsPoint@CPictureLabel@@UAEHUtagPOINT@@@Z
 * func-address: 0x100a6170
 * callers: none
 * callees: none
 */

BOOL __thiscall CPictureLabel::ContainsPoint(CPictureLabel *this, POINT pt)
{
  return PtInRect((const RECT *)((char *)this + 164), pt);
}
