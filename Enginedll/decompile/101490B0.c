/*
 * func-name: sub_101490B0
 * func-address: 0x101490b0
 * callers: none
 * callees: none
 */

FILE **__thiscall sub_101490B0(FILE **this, void *Buffer, size_t ElementSize)
{
  fwrite(Buffer, ElementSize, 1u, this[1]);
  return this;
}
