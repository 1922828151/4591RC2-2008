/*
 * func-name: ??0NxPhysics@@QAE@ABV0@@Z
 * func-address: 0x10053d20
 * callers: none
 * callees: 0x100523a0, 0x10053750, 0x10053990, 0x10053a80
 */

NxPhysics *__thiscall NxPhysics::NxPhysics(NxPhysics *this, const struct NxPhysics *a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  OutpopRaycastReport::OutpopRaycastReport(
    (NxPhysics *)((char *)this + 20),
    (const struct NxPhysics *)((char *)a2 + 20));
  *((_DWORD *)this + 10) = &OutpopControllerHitReport::`vftable';
  *((_DWORD *)this + 11) = &PhysicsTriggerReport::`vftable';
  sub_10053990((_DWORD *)this + 12, (int)a2 + 48);
  sub_10053A80((_DWORD *)this + 16, (int)a2 + 64);
  sub_100523A0((_DWORD *)this + 20, (int)a2 + 80);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  return this;
}
