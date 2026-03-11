/*
 * func-name: sub_1017A110
 * func-address: 0x1017a110
 * callers: none
 * callees: 0x101a2780, 0x101a2c8e
 */

int sub_1017A110(int a1, char *Format, ...)
{
  char Buffer[8000]; // [esp+0h] [ebp-1F44h] BYREF
  va_list va; // [esp+1F50h] [ebp+Ch] BYREF

  va_start(va, Format);
  return vsprintf(Buffer, Format, va);
}
