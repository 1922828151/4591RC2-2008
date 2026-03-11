/*
 * func-name: sub_1017EA69
 * func-address: 0x1017ea69
 * callers: 0x101a229f
 * callees: 0x101a2c9e
 */

int __stdcall sub_1017EA69(wchar_t *Buffer, int a2, wchar_t *Format, va_list Args)
{
  int v4; // ebx
  unsigned int v5; // esi
  int v6; // eax

  v4 = 0;
  if ( a2 )
  {
    v5 = a2 - 1;
    v6 = vsnwprintf(Buffer, a2 - 1, Format, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147024774;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    Buffer[v5] = 0;
    return v4;
  }
  return -2147024809;
}
