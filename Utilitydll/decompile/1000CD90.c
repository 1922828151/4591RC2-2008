/*
 * func-name: sub_1000CD90
 * func-address: 0x1000cd90
 * callers: 0x10002f40, 0x10003e80, 0x10004830, 0x1000bb00, 0x1000bc60, 0x1000d0e0, 0x10016fc0, 0x10018720
 * callees: none
 */

int __usercall sub_1000CD90@<eax>(size_t a1@<edx>, wchar_t *Buffer, wchar_t *Format, ...)
{
  va_list ArgList; // [esp+Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  return vswprintf_c_l(Buffer, a1, Format, 0, ArgList);
}
