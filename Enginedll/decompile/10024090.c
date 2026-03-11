/*
 * func-name: ??4SoundEmitter@@QAEAAV0@ABV0@@Z
 * func-address: 0x10024090
 * callers: none
 * callees: 0x100218c0
 */

int __thiscall SoundEmitter::operator=(int this, int a2)
{
  sub_100218C0(this + 4, a2 + 4);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(float *)(this + 44) = *(float *)(a2 + 44);
  return this;
}
