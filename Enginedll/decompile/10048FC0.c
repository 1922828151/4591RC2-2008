/*
 * func-name: sub_10048FC0
 * func-address: 0x10048fc0
 * callers: 0x10043960
 * callees: 0x10048ab0, 0x10048f10
 */

_DWORD *__thiscall sub_10048FC0(_DWORD *this, struct ActorSelectedList *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 44;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 44 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_10048AB0(v5, 1, (int)a2);
    this[2] = (char *)v5 + 44;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_10048F10(this, &v8, this, v7, a2);
  }
  return result;
}
