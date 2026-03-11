/*
 * func-name: sub_100149D0
 * func-address: 0x100149d0
 * callers: 0x100154c0
 * callees: 0x100096e0, 0x1000bd00, 0x10011870, 0x10012960, 0x10013210, 0x10013c00, 0x10048bd0, 0x101a2500
 */

int *__thiscall sub_100149D0(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 44) == 0 )
  {
    sub_10013C00(this);
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 44;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (this[3] - v6) / 44;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 44 * sub_100096E0(this);
      sub_10012960(a2[1], v11, v6);
      this[2] = sub_10048BD0(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_10013210(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_100096E0(a2);
    if ( sub_1000BD00(this, v12) )
      this[2] = sub_10048BD0(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_10012960(a2[1], a2[2], this[1]);
  sub_10011870(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 44 * ((a2[2] - v9) / 44);
  else
    this[2] = this[1];
  return this;
}
