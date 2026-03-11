/*
 * func-name: sub_10032460
 * func-address: 0x10032460
 * callers: 0x10032750, 0x10032860
 * callees: 0x10031c00, 0x10032340, 0x100371b6, 0x100483cb
 */

_DWORD *__thiscall sub_10032460(_DWORD *this, _BYTE *Source, rsize_t SourceSize)
{
  unsigned int v4; // ecx
  unsigned int *v5; // ebx
  unsigned int v6; // eax
  int v7; // eax
  _DWORD *result; // eax
  rsize_t v9; // eax
  bool v10; // zf
  rsize_t v11; // ecx
  void *v12; // eax
  bool v13; // cf

  v4 = this[6];
  v5 = this + 1;
  if ( v4 < 0x10 )
    v6 = (unsigned int)(this + 1);
  else
    v6 = *v5;
  if ( (unsigned int)Source >= v6 )
  {
    v7 = v4 < 0x10 ? (int)(this + 1) : *v5;
    if ( v7 + this[5] > (unsigned int)Source )
    {
      if ( v4 >= 0x10 )
        v5 = (unsigned int *)*v5;
      return (_DWORD *)sub_10032340((int)this, this, Source - (_BYTE *)v5, SourceSize);
    }
  }
  if ( SourceSize == -1 )
    std::_String_base::_Xlen();
  v9 = this[6];
  if ( v9 < SourceSize )
  {
    sub_10031C00(this, SourceSize, this[5]);
    v10 = SourceSize == 0;
LABEL_16:
    if ( !v10 )
    {
      v11 = this[6];
      if ( v11 < 0x10 )
        v12 = this + 1;
      else
        v12 = (void *)*v5;
      memcpy_s(v12, v11, Source, SourceSize);
      v13 = this[6] < 0x10u;
      this[5] = SourceSize;
      if ( !v13 )
        v5 = (unsigned int *)*v5;
      *((_BYTE *)v5 + SourceSize) = 0;
    }
    return this;
  }
  v10 = SourceSize == 0;
  if ( SourceSize )
    goto LABEL_16;
  this[5] = 0;
  if ( v9 >= 0x10 )
    v5 = (unsigned int *)*v5;
  result = this;
  *(_BYTE *)v5 = 0;
  return result;
}
