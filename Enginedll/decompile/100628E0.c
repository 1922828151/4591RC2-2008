/*
 * func-name: sub_100628E0
 * func-address: 0x100628e0
 * callers: 0x100606b0
 * callees: 0x10061900, 0x100625b0
 */

void __thiscall sub_100628E0(_DWORD *this, _WORD *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _WORD *v5; // edi
  _WORD *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 1;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 1 )
  {
    v5 = (_WORD *)this[2];
    LOBYTE(v7) = 0;
    sub_10061900(v5, 1, a2);
    this[2] = v5 + 1;
  }
  else
  {
    v6 = (_WORD *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_100625B0(this, &v7, (int)this, v6, a2);
  }
}
