/*
 * func-name: sub_1009B4B0
 * func-address: 0x1009b4b0
 * callers: none
 * callees: 0x10097800, 0x101a2780
 */

void sub_1009B4B0(int a1, char *Format, ...)
{
  char Buffer[8000]; // [esp+0h] [ebp-1F40h] BYREF
  va_list va; // [esp+1F4Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  vsprintf(Buffer, Format, va);
  Warning(Buffer);
}
