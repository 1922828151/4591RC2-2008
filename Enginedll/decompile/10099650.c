/*
 * func-name: sub_10099650
 * func-address: 0x10099650
 * callers: none
 * callees: 0x100956d0, 0x101a2780
 */

int sub_10099650(int a1, char *Format, ...)
{
  char Buffer[8000]; // [esp+0h] [ebp-1F40h] BYREF
  va_list va; // [esp+1F4Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  vsprintf(Buffer, Format, va);
  return Error(Buffer);
}
