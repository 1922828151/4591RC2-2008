/*
 * func-name: ?DettachNxActor@NxPhysics@@QAE_NPAVNxActor@@@Z
 * func-address: 0x10140e90
 * callers: none
 * callees: none
 */

char __thiscall NxPhysics::DettachNxActor(NxPhysics *this, struct NxActor *a2)
{
  if ( !a2 )
    return 0;
  *((_DWORD *)a2 + 1) = 0;
  return 1;
}
