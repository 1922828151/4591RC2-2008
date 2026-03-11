/*
 * func-name: sub_1014E230
 * func-address: 0x1014e230
 * callers: 0x1014e9b0, 0x1014f720
 * callees: none
 */

int *__thiscall sub_1014E230(_DWORD *this, int a2)
{
  int *result; // eax
  int *v3; // esi
  int *v4; // edi

  result = (int *)this[1];
  v3 = (int *)result[1];
  v4 = result;
  if ( !*((_BYTE *)v3 + 81) )
  {
    do
    {
      if ( (unsigned __int8)std::operator<<char>(v3 + 3, a2) )
      {
        v3 = (int *)v3[2];
      }
      else
      {
        v4 = v3;
        v3 = (int *)*v3;
      }
    }
    while ( !*((_BYTE *)v3 + 81) );
    return v4;
  }
  return result;
}
