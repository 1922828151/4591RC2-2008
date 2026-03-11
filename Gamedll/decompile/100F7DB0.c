/*
 * func-name: sub_100F7DB0
 * func-address: 0x100f7db0
 * callers: 0x100193c1
 * callees: 0x1000b73f, 0x1001816a, 0x102ca13e
 */

_DWORD *__thiscall sub_100F7DB0(_DWORD *this, int a2)
{
  int v3; // eax
  size_t v4; // edi
  const void *v5; // eax

  v3 = std::string::size(a2);
  sub_1000B73F(v3);
  v4 = std::string::length(a2);
  sub_1001816A(v4 + 4);
  v5 = (const void *)std::string::c_str(a2);
  memcpy((void *)(this[2] + this[1]), v5, v4);
  this[2] += v4;
  return this;
}
