/*
 * func-name: sub_1009F880
 * func-address: 0x1009f880
 * callers: 0x10002f7c
 * callees: none
 */

void __thiscall sub_1009F880(ActorGroup **this, const void *a2)
{
  qmemcpy(this + 14, a2, 0x40u);
  ActorGroup::SetTransform(this[1], 0, (struct Matrix *)(this + 14));
}
