/*
 * func-name: sub_1016CB40
 * func-address: 0x1016cb40
 * callers: 0x1016cc30, 0x1016d4c0
 * callees: none
 */

int *__thiscall sub_1016CB40(_DWORD *this, int a2)
{
  int *result; // eax
  int *v3; // esi
  int *v4; // edi

  result = (int *)this[1];
  v3 = (int *)result[1];
  v4 = result;
  if ( !*((_BYTE *)v3 + 45) )
  {
    do
    {
      if ( (unsigned __int8)std::operator<<wchar_t>(v3 + 3, a2) )
      {
        v3 = (int *)v3[2];
      }
      else
      {
        v4 = v3;
        v3 = (int *)*v3;
      }
    }
    while ( !*((_BYTE *)v3 + 45) );
    return v4;
  }
  return result;
}
