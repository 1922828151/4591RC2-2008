/*
 * func-name: sub_100CE870
 * func-address: 0x100ce870
 * callers: 0x101b8220, 0x101b82b0
 * callees: 0x101a24ac
 */

int __thiscall sub_100CE870(int this)
{
  _WORD *v2; // eax

  v2 = operator new(2u);
  *(_DWORD *)(this + 5120) = v2;
  *v2 = 0;
  *(_DWORD *)(this + 5124) = 1;
  *(_DWORD *)(this + 5128) = 0;
  *(_BYTE *)(this + 5136) = 1;
  *(_DWORD *)(this + 5140) = 0;
  *(_DWORD *)(this + 5132) = 0;
  return this;
}
