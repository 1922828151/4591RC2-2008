/*
 * func-name: sub_1002C730
 * func-address: 0x1002c730
 * callers: 0x1002db30
 * callees: 0x10014910, 0x100252f0, 0x10025310, 0x10025b00, 0x10035300
 */

char __thiscall sub_1002C730(_DWORD *this)
{
  int v2; // ecx
  int v3; // ebx
  unsigned int v4; // edi
  int v5; // eax
  int (__stdcall ***v6)(size_t, int); // eax
  int (__stdcall ***v7)(size_t, int); // eax
  void *v8; // eax
  void *Src; // [esp+Ch] [ebp-24h]
  _DWORD v11[3]; // [esp+10h] [ebp-20h] BYREF
  unsigned int v12[5]; // [esp+1Ch] [ebp-14h] BYREF

  sub_100252F0(v12, this[63], this[57]);
  sub_10025310(v12, v11);
  v2 = v11[2];
  v3 = v11[1];
  v4 = 0;
  Src = (void *)v11[0];
  if ( this[56] )
  {
    v5 = 0;
    do
    {
      *(_DWORD *)(this[62] + v5 + 12) = *(_DWORD *)(v2 + 4 * *(_DWORD *)(this[62] + v5 + 12));
      *(_DWORD *)(this[62] + v5 + 16) = *(_DWORD *)(v2 + 4 * *(_DWORD *)(this[62] + v5 + 16));
      ++v4;
      *(_DWORD *)(this[62] + v5 + 20) = *(_DWORD *)(v2 + 4 * *(_DWORD *)(this[62] + v5 + 20));
      v5 += 48;
    }
    while ( v4 < this[56] );
  }
  if ( this[63] )
  {
    v6 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v6)[3])(v6, this[63]);
    this[63] = 0;
  }
  v7 = sub_10014910();
  v8 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v7)(v7, 12 * v3, 0);
  this[63] = v8;
  if ( v8 )
  {
    memcpy_0(v8, Src, 12 * v3);
    this[57] = v3;
    sub_10025B00(v12);
    return 1;
  }
  else
  {
    sub_10025B00(v12);
    return 0;
  }
}
