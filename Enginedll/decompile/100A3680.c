/*
 * func-name: ?ContainsPoint@CREButton@@UAEHUtagPOINT@@@Z
 * func-address: 0x100a3680
 * callers: none
 * callees: none
 */

BOOL __thiscall CREButton::ContainsPoint(CREButton *this, POINT pt)
{
  const RECT *v2; // eax

  v2 = (const RECT *)*((_DWORD *)this + 195);
  if ( v2 )
    return PtInRect(v2, pt);
  else
    return PtInRect((const RECT *)((char *)this + 164), pt);
}
