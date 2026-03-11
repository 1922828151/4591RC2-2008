/*
 * func-name: sub_1020A870
 * func-address: 0x1020a870
 * callers: 0x1020abd0, 0x1020aed0, 0x1020bd10
 * callees: none
 */

int __usercall sub_1020A870@<eax>(size_t a1@<edx>, wchar_t *Buffer, wchar_t *Format, ...)
{
  va_list ArgList; // [esp+Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  return _vswprintf_c_l(Buffer, a1, Format, 0, ArgList);
}
