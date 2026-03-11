/*
 * func-name: sub_1020BCD0
 * func-address: 0x1020bcd0
 * callers: 0x1000a3df
 * callees: 0x1001816a, 0x102ca13e
 */

void *__thiscall sub_1020BCD0(_DWORD *this, void *Src, size_t Size)
{
  void *result; // eax

  sub_1001816A(Size);
  result = memcpy((void *)(this[2] + this[1]), Src, Size);
  this[2] += Size;
  return result;
}
