/*
 * func-name: sub_10148FB0
 * func-address: 0x10148fb0
 * callers: none
 * callees: none
 */

double __fastcall sub_10148FB0(int a1)
{
  float Buffer; // [esp+0h] [ebp-4h] BYREF

  Buffer = *(float *)&a1;
  fread(&Buffer, 4u, 1u, *(FILE **)(a1 + 4));
  return Buffer;
}
