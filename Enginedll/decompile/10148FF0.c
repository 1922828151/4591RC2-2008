/*
 * func-name: sub_10148FF0
 * func-address: 0x10148ff0
 * callers: none
 * callees: none
 */

size_t __thiscall sub_10148FF0(FILE **this, void *Buffer, size_t ElementSize)
{
  return fread(Buffer, ElementSize, 1u, this[1]);
}
