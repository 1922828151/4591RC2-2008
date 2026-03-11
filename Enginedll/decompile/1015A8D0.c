/*
 * func-name: sub_1015A8D0
 * func-address: 0x1015a8d0
 * callers: 0x1015aaf0
 * callees: 0x10159280, 0x1015a010, 0x1015a060, 0x1015a210, 0x1015a310, 0x1015a340, 0x1015a530, 0x101a2500
 */

int __thiscall sub_1015A8D0(int this, _DWORD *a2)
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

  if ( (_DWORD *)this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 84) == 0 )
  {
    sub_1015A530((int *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 84;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 84;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 84 * sub_10159280((_DWORD *)this);
      sub_1015A060(a2[1], v11, v6);
      *(_DWORD *)(this + 8) = sub_1015A310(v11, a2[2], *(CREControl **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1015A340(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10159280(a2);
    if ( sub_1015A010((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_1015A310(a2[1], a2[2], *(CREControl **)(this + 4));
    return this;
  }
  v8 = sub_1015A060(a2[1], a2[2], *(_DWORD *)(this + 4));
  sub_1015A210(v8, *(_DWORD *)(this + 8));
  v9 = a2[1];
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 84 * ((a2[2] - v9) / 84);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
