/*
 * func-name: ?Landed@Actor@@UAEXAAVVector@@@Z
 * func-address: 0x1001be20
 * callers: none
 * callees: none
 */

void __thiscall Actor::Landed(Actor *this, struct Vector *a2)
{
  if ( *((_BYTE *)this + 213) )
  {
    if ( Actor::callback_Landed )
      Actor::callback_Landed(this, a2);
  }
}
