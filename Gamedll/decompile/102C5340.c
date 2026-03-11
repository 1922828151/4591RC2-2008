/*
 * func-name: sub_102C5340
 * func-address: 0x102c5340
 * callers: 0x102c5c90
 * callees: none
 */

_DWORD *__thiscall sub_102C5340(_DWORD *this, _DWORD *a2, int a3, char *Destination, int a5, char *Source)
{
  int v7; // eax
  char *v8; // ebx
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( Destination != Source )
  {
    v7 = (this[2] - (int)Source) >> 2;
    v8 = &Destination[4 * v7];
    if ( v7 > 0 )
      memmove_s(Destination, 4 * v7, Source, 4 * v7);
    this[2] = v8;
  }
  result = a2;
  a2[1] = Destination;
  *a2 = a3;
  return result;
}
