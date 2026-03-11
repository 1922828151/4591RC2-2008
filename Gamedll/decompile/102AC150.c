/*
 * func-name: sub_102AC150
 * func-address: 0x102ac150
 * callers: 0x10002fa4
 * callees: none
 */

void __thiscall sub_102AC150(_DWORD *this)
{
  Outpop::Utility::Lock *v2; // edi

  v2 = (Outpop::Utility::Lock *)(this + 4);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 4));
  this[1] = -1;
  Outpop::Utility::Lock::unlock(v2);
}
