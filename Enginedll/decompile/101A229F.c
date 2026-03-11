/*
 * func-name: sub_101A229F
 * func-address: 0x101a229f
 * callers: none
 * callees: 0x1017ea69
 */

int sub_101A229F(wchar_t *Buffer, unsigned int a2, wchar_t *Format, ...)
{
  va_list va; // [esp+14h] [ebp+14h] BYREF

  va_start(va, Format);
  if ( a2 <= 0x7FFFFFFF )
    return sub_1017EA69(Buffer, a2, Format, va);
  else
    return -2147024809;
}
