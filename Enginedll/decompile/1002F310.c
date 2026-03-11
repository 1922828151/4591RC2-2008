/*
 * func-name: sub_1002F310
 * func-address: 0x1002f310
 * callers: 0x10030cb0
 * callees: 0x1000a280, 0x1001da00, 0x1001de20, 0x1001ec20, 0x10020a70, 0x10023e20, 0x10026fd0, 0x1002ca50, 0x101a2500
 */

int __thiscall sub_1002F310(int this, _DWORD *a2)
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
  if ( !v3 || (v4 = (a2[2] - v3) / 96) == 0 )
  {
    sub_1002CA50((int *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 96;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 96;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 96 * std::vector<EditorVar>::size((_DWORD *)this);
      sub_1001EC20(a2[1], v11, v6);
      *(_DWORD *)(this + 8) = sub_10023E20(v11, a2[2], *(CREControl **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_10026FD0(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = std::vector<EditorVar>::size(a2);
    if ( sub_1001DA00((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_10023E20(a2[1], a2[2], *(CREControl **)(this + 4));
    return this;
  }
  v8 = sub_1001DE20(a2[1], a2[2], v6);
  sub_10020A70(v8, *(_DWORD *)(this + 8));
  v9 = a2[1];
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 96 * ((a2[2] - v9) / 96);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
