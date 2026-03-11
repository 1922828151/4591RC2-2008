/*
 * func-name: sub_10014C60
 * func-address: 0x10014c60
 * callers: 0x10014af0
 * callees: none
 */

int __usercall sub_10014C60@<eax>(char *a1@<edx>, char *Format, ...)
{
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(a1, 0x104u, Format, ArgList);
}
