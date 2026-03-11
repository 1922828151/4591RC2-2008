/*
 * func-name: sub_1000D860
 * func-address: 0x1000d860
 * callers: 0x10012cd0
 * callees: 0x1000d4b0, 0x1000d680, 0x1000d780, 0x1007fb90, 0x1007fe10
 */

_BYTE *__thiscall sub_1000D860(_BYTE *this, int a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  this[4] = *(_BYTE *)(a2 + 4);
  sub_1000D780((_DWORD *)this + 2, a2 + 8);
  std::vector<Actor *>::vector<Actor *>((_DWORD *)this + 6, a2 + 24);
  std::vector<Material *>::vector<Material *>((_DWORD *)this + 10, a2 + 40);
  *((_DWORD *)this + 14) = *(_DWORD *)(a2 + 56);
  sub_1007FB90(a2 + 60);
  sub_1007FE10(a2 + 84);
  return this;
}
