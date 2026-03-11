/*
 * func-name: sub_10061450
 * func-address: 0x10061450
 * callers: 0x10004264
 * callees: 0x10006a96, 0x10007955, 0x10009098, 0x1000b5a5, 0x10013c41, 0x1001966e, 0x102c9d50
 */

int *__thiscall sub_10061450(int *this, int *a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 40) == 0 )
  {
    sub_1001966E();
    return this;
  }
  v7 = this[1];
  if ( v7 )
    v8 = (this[2] - v7) / 40;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v12 = (this[3] - v7) / 40;
    else
      v12 = 0;
    if ( v5 <= v12 )
    {
      v14 = v4 + 40 * sub_10013C41();
      sub_1000B5A5(v4, v14, v7);
      this[2] = sub_10009098(v14, a2[2], this[2]);
      return this;
    }
    if ( v7 )
    {
      sub_10007955(v7, this[2]);
      operator delete((void *)this[1]);
    }
    v13 = sub_10013C41();
    if ( (unsigned __int8)sub_10006A96(v13) )
      this[2] = sub_10009098(a2[1], a2[2], this[1]);
    return this;
  }
  v9 = sub_1000B5A5(v4, a2[2], this[1]);
  sub_10007955(v9, this[2]);
  v10 = a2[1];
  if ( v10 )
    v11 = this[1] + 40 * ((a2[2] - v10) / 40);
  else
    v11 = this[1];
  this[2] = v11;
  return this;
}
