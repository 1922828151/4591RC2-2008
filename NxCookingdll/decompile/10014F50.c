/*
 * func-name: sub_10014F50
 * func-address: 0x10014f50
 * callers: 0x10011260, 0x10013f60, 0x10014090, 0x100140f0, 0x1002e520, 0x1002f3a0, 0x10030400, 0x10031570
 * callees: 0x10014dc0
 */

int __thiscall sub_10014F50(int this, void **Size, void *Src)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_WORD *)(this + 20) = 0;
  *(_WORD *)(this + 22) = 0;
  *(_BYTE *)(this + 24) = 0;
  *(_BYTE *)(this + 25) = 0;
  sub_10014DC0((void ***)this, (int)Size, Src, 0, Size);
  return this;
}
