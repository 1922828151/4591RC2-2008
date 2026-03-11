/*
 * func-name: sub_10004F70
 * func-address: 0x10004f70
 * callers: none
 * callees: 0x10019750, 0x10019940
 */

int sub_10004F70(int a1, char *Format, ...)
{
  char Buffer[8000]; // [esp+0h] [ebp-1F44h] BYREF
  va_list ArgList; // [esp+1F50h] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  return vsprintf(Buffer, Format, ArgList);
}
