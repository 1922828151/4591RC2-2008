/*
 * func-name: sub_1013EC70
 * func-address: 0x1013ec70
 * callers: 0x10139890, 0x1013f310
 * callees: none
 */

int *__thiscall sub_1013EC70(_DWORD *this, int a2)
{
  int *result; // eax
  int *v3; // esi
  int *v4; // edi

  result = (int *)this[1];
  v3 = (int *)result[1];
  v4 = result;
  if ( !*((_BYTE *)v3 + 49) )
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
    while ( !*((_BYTE *)v3 + 49) );
    return v4;
  }
  return result;
}
