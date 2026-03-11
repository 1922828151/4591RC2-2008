/*
 * func-name: sub_10148F50
 * func-address: 0x10148f50
 * callers: none
 * callees: none
 */

char __fastcall sub_10148F50(int a1)
{
  char Buffer; // [esp+1h] [ebp-1h] BYREF

  Buffer = HIBYTE(a1);
  fread(&Buffer, 1u, 1u, *(FILE **)(a1 + 4));
  return Buffer;
}
