/*
 * func-name: sub_10148FD0
 * func-address: 0x10148fd0
 * callers: none
 * callees: none
 */

double __thiscall sub_10148FD0(FILE **this)
{
  double Buffer; // [esp+0h] [ebp-8h] BYREF

  fread(&Buffer, 8u, 1u, this[1]);
  return Buffer;
}
