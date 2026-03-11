/*
 * func-name: sub_1013ED50
 * func-address: 0x1013ed50
 * callers: 0x1013e2e0
 * callees: 0x101370c0, 0x1013ec20, 0x101a252e
 */

_DWORD *__thiscall sub_1013ED50(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  size_t v4; // edi
  const void *v5; // eax

  v3 = std::string::size(a2);
  sub_1013EC20(this, v3);
  v4 = std::string::length(a2);
  sub_101370C0((int)this, v4 + 4);
  v5 = (const void *)std::string::c_str(a2);
  memcpy((void *)(this[2] + this[1]), v5, v4);
  this[2] += v4;
  return this;
}
