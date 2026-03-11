/*
 * func-name: sub_1000A570
 * func-address: 0x1000a570
 * callers: 0x100014f0, 0x100031a0, 0x10003d20, 0x10004000, 0x100042e0, 0x10004730, 0x10004b30, 0x100052c0, 0x10005580, 0x10005b40, 0x10005e10, 0x10005fe0, 0x10006210, 0x1000ac90, 0x1000b380, 0x1000c0c0, 0x1000f070, 0x1000f1f0, 0x10010fd0
 * callees: none
 */

int __usercall sub_1000A570@<eax>(size_t a1@<edx>, wchar_t *Buffer, wchar_t *Format, ...)
{
  va_list ArgList; // [esp+Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  return vswprintf_c_l(Buffer, a1, Format, 0, ArgList);
}
