/*
 * func-name: ?ContainsPoint@CREControl@@UAEHUtagPOINT@@@Z
 * func-address: 0x10069d00
 * callers: none
 * callees: none
 */

BOOL __thiscall CREControl::ContainsPoint(CREControl *this, POINT pt)
{
  return PtInRect((const RECT *)((char *)this + 164), pt);
}
