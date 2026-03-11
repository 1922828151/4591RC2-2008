/*
 * func-name: ?GetControllerContractActor@NxPhysics@@QAEPAVNxActor@@PAV2@@Z
 * func-address: 0x10140ab0
 * callers: none
 * callees: none
 */

struct NxActor *__thiscall NxPhysics::GetControllerContractActor(NxPhysics *this, struct NxActor *a2)
{
  return *(struct NxActor **)(*(_DWORD *)(*((_DWORD *)a2 + 1) + 12) + 52);
}
