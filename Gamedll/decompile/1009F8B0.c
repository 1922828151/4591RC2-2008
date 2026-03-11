/*
 * func-name: sub_1009F8B0
 * func-address: 0x1009f8b0
 * callers: 0x10010519
 * callees: none
 */

void __thiscall sub_1009F8B0(int this, const void *a2, _DWORD *a3)
{
  qmemcpy((void *)(this + 56), a2, 0x40u);
  *(_DWORD *)(this + 44) = *a3;
  *(_DWORD *)(this + 48) = a3[1];
  *(_DWORD *)(this + 52) = a3[2];
  ActorGroup::SetTransform(*(ActorGroup **)(this + 4), (struct Vector *)(this + 44), (struct Matrix *)(this + 56));
}
