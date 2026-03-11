/*
 * func-name: sub_101A81F0
 * func-address: 0x101a81f0
 * callers: 0x100050ba
 * callees: 0x10003d82, 0x102ca13e
 */

_DWORD *__thiscall sub_101A81F0(_DWORD *this, int a2)
{
  size_t v3; // edi
  int v4; // eax

  v3 = sub_10003D82();
  v4 = this[3];
  if ( v4 + v3 <= this[2] )
  {
    memcpy(byte_103B6158, (const void *)(v4 + this[1]), v3);
    byte_103B6158[v3] = 0;
    std::string::operator=(a2, byte_103B6158);
    this[3] += v3;
  }
  return this;
}
