/*
 * func-name: ?SafeSetPointer@Actor@@QAEXPAPAV1@0@Z
 * func-address: 0x10051160
 * callers: none
 * callees: 0x1004eb70, 0x10050740
 */

void __thiscall Actor::SafeSetPointer(Actor *this, struct Actor **a2, struct Actor **a3)
{
  Actor *v4; // ecx
  bool v5; // zf

  if ( a2 != a3 )
  {
    if ( *a2 )
      Actor::DontSetNULLOnDeath(*a2, this, a2);
    if ( a3 )
    {
      v4 = *a3;
      v5 = *a3 == 0;
      *a2 = *a3;
      if ( !v5 )
        Actor::SetNULLOnDeath(v4, this, a2);
    }
  }
}
