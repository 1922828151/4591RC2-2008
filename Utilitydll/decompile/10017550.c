/*
 * func-name: ?release@Ref_Object@Utility@Outpop@@QAEXXZ
 * func-address: 0x10017550
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Ref_Object::release(volatile LONG *this)
{
  if ( !InterlockedDecrement(this + 1) )
  {
    if ( this )
      (**(void (__thiscall ***)(volatile LONG *, int))this)(this, 1);
  }
}
