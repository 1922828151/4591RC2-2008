/*
 * func-name: sub_10036110
 * func-address: 0x10036110
 * callers: 0x10034c30
 * callees: 0x10035ec0
 */

int __thiscall sub_10036110(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v4; // eax

  result = sub_10035EC0((int)this, this[1] + 1);
  if ( result >= 0 )
  {
    v4 = (_DWORD *)(*this + 12 * this[1]);
    *v4 = *a2;
    v4[1] = a2[1];
    v4[2] = a2[2];
    ++this[1];
    return 0;
  }
  return result;
}
