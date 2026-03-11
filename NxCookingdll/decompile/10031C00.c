/*
 * func-name: sub_10031C00
 * func-address: 0x10031c00
 * callers: 0x10032340, 0x10032460
 * callees: 0x10031920, 0x10034bd3, 0x100371b6, 0x10037449
 */

_BYTE *__thiscall sub_10031C00(_DWORD *this, unsigned int Destination, rsize_t SourceSize)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  const void *v7; // eax
  _BYTE *result; // eax
  _DWORD v9[10]; // [esp+0h] [ebp-28h] BYREF
  void *Destinationa; // [esp+30h] [ebp+8h]

  v9[6] = v9;
  v9[5] = this;
  v4 = Destination | 0xF;
  if ( (Destination | 0xF) == 0xFFFFFFFF )
  {
    v4 = Destination;
  }
  else
  {
    v5 = this[6];
    v6 = v5 >> 1;
    if ( v4 / 3 < v5 >> 1 && v5 <= -2 - v6 )
      v4 = v6 + v5;
  }
  v9[9] = 0;
  Destinationa = sub_10031920((char *)(v4 + 1));
  if ( SourceSize )
  {
    if ( this[6] < 0x10u )
      v7 = this + 1;
    else
      v7 = (const void *)this[1];
    memcpy_s(Destinationa, v4 + 1, v7, SourceSize);
  }
  if ( this[6] >= 0x10u )
    j__free((void *)this[1]);
  result = this + 1;
  *((_BYTE *)this + 4) = 0;
  this[1] = Destinationa;
  this[6] = v4;
  this[5] = SourceSize;
  if ( v4 >= 0x10 )
    result = Destinationa;
  result[SourceSize] = 0;
  return result;
}
