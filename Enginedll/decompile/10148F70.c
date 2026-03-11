/*
 * func-name: sub_10148F70
 * func-address: 0x10148f70
 * callers: none
 * callees: none
 */

__int16 __thiscall sub_10148F70(FILE **this)
{
  FILE **Buffer; // [esp+0h] [ebp-4h] BYREF

  Buffer = this;
  fread(&Buffer, 2u, 1u, this[1]);
  return (__int16)Buffer;
}
