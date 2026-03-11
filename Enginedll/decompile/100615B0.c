/*
 * func-name: sub_100615B0
 * func-address: 0x100615b0
 * callers: 0x100606b0
 * callees: none
 */

void *__thiscall sub_100615B0(_DWORD *this, int a2)
{
  void *result; // eax
  void *v4; // ecx
  bool v5; // zf

  result = (void *)a2;
  if ( this[1] >= a2 )
  {
    this[6] = *this;
  }
  else if ( this[2] == -1 )
  {
    this[6] = *this;
  }
  else
  {
    v4 = (void *)*this;
    v5 = *this == 0;
    this[1] = a2;
    if ( v5 )
      result = malloc(12 * a2);
    else
      result = realloc(v4, 12 * a2);
    *this = result;
    this[6] = result;
  }
  return result;
}
