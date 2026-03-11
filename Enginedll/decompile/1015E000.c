/*
 * func-name: sub_1015E000
 * func-address: 0x1015e000
 * callers: 0x1015fcb0
 * callees: none
 */

int __stdcall sub_1015E000(_BYTE *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int result; // eax

  v5 = a5 + (unsigned __int8)*a1;
  if ( v5 >= 0 )
  {
    if ( v5 > 255 )
      LOBYTE(v5) = -1;
  }
  else
  {
    LOBYTE(v5) = 0;
  }
  *a1 = v5;
  v6 = a5 + (unsigned __int8)*a2;
  if ( v6 >= 0 )
  {
    if ( v6 > 255 )
      LOBYTE(v6) = -1;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  *a2 = v6;
  v7 = a5 + (unsigned __int8)*a3;
  if ( v7 >= 0 )
  {
    if ( v7 > 255 )
      LOBYTE(v7) = -1;
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  *a3 = v7;
  result = a5 + (unsigned __int8)*a4;
  if ( result >= 0 )
  {
    if ( result > 255 )
      result = 255;
    *a4 = result;
  }
  else
  {
    result = 0;
    *a4 = 0;
  }
  return result;
}
