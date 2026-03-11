/*
 * func-name: sub_102C6FD0
 * func-address: 0x102c6fd0
 * callers: none
 * callees: 0x102c9d62, 0x102ca0a0
 */

int sub_102C6FD0(int a1, char *Format, ...)
{
  char Buffer[8000]; // [esp+0h] [ebp-1F44h] BYREF
  va_list va; // [esp+1F50h] [ebp+Ch] BYREF

  va_start(va, Format);
  return vsprintf(Buffer, Format, va);
}
