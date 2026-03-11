/*
 * func-name: sub_10012F30
 * func-address: 0x10012f30
 * callers: 0x10013320
 * callees: 0x1000a430, 0x1000be90, 0x1000c4f0, 0x1000c5c0, 0x1000db90, 0x10011c60, 0x10064070, 0x101a2500
 */

int __thiscall sub_10012F30(int this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v6; // ebx
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // eax

  if ( (_DWORD *)this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 140) == 0 )
  {
    sub_10011C60((int *)this);
    return this;
  }
  v6 = *(_DWORD **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 140;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 140;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 140 * sub_1000A430((_DWORD *)this);
      sub_1000C5C0(a2[1], v11, v6);
      *(_DWORD *)(this + 8) = sub_10064070(v11, a2[2], *(_DWORD *)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1000DB90((int)v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_1000A430(a2);
    if ( sub_1000C4F0((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_10064070(a2[1], a2[2], *(_DWORD *)(this + 4));
    return this;
  }
  v8 = sub_1000BE90(a2[1], a2[2], v6);
  sub_1000DB90((int)v8, *(_DWORD *)(this + 8));
  v9 = a2[1];
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 140 * ((a2[2] - v9) / 140);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
