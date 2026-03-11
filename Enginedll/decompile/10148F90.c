/*
 * func-name: sub_10148F90
 * func-address: 0x10148f90
 * callers: none
 * callees: none
 */

FILE **__thiscall sub_10148F90(FILE **this)
{
  FILE **Buffer; // [esp+0h] [ebp-4h] BYREF

  Buffer = this;
  fread(&Buffer, 4u, 1u, this[1]);
  return Buffer;
}
