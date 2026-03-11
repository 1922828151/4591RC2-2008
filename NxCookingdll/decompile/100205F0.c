/*
 * func-name: sub_100205F0
 * func-address: 0x100205f0
 * callers: 0x10022c20
 * callees: 0x1000f320, 0x10014910, 0x10025520, 0x10025630
 */

char __thiscall sub_100205F0(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax
  _DWORD *v4; // edx
  unsigned int v6; // edx
  int v7; // eax
  int v8; // ecx
  double v9; // st7
  float *v10; // ecx
  _DWORD v11[2]; // [esp+Ch] [ebp-28h] BYREF
  int v12; // [esp+14h] [ebp-20h] BYREF
  int v13; // [esp+18h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-18h]
  int v15; // [esp+20h] [ebp-14h]
  int v16; // [esp+24h] [ebp-10h]
  int v17; // [esp+28h] [ebp-Ch]
  int v18; // [esp+2Ch] [ebp-8h]
  int v19; // [esp+30h] [ebp-4h]

  if ( *(_DWORD *)(this[1] + 20) )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, *(_DWORD *)(this[1] + 20));
    *(_DWORD *)(this[1] + 20) = 0;
  }
  if ( !*(_DWORD *)(this[1] + 12) )
    return 0;
  v3 = sub_10014910();
  *(_DWORD *)(this[1] + 20) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v3)(
                                v3,
                                12 * *(_DWORD *)(this[1] + 12),
                                48);
  v4 = (_DWORD *)this[1];
  if ( !v4[5] )
    return 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v16 = 0;
  v18 = 0;
  v12 = v4[3];
  v13 = v4[4];
  v14 = v4[1];
  v15 = v4[2];
  LOBYTE(v17) = 1;
  v19 = v4[5];
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v11);
  if ( !(unsigned __int8)sub_10025630(&v12) )
  {
    sub_10025520(v11);
    return 0;
  }
  v6 = 0;
  if ( *(_DWORD *)(this[1] + 12) )
  {
    v7 = 0;
    do
    {
      ++v6;
      *(float *)(v7 + *(_DWORD *)(this[1] + 20)) = -*(float *)(*(_DWORD *)(this[1] + 20) + v7);
      *(float *)(*(_DWORD *)(this[1] + 20) + v7 + 4) = -*(float *)(*(_DWORD *)(this[1] + 20) + v7 + 4);
      v8 = *(_DWORD *)(this[1] + 20);
      v9 = *(float *)(v8 + v7 + 8);
      v10 = (float *)(v8 + v7 + 8);
      v7 += 12;
      *v10 = -v9;
    }
    while ( v6 < *(_DWORD *)(this[1] + 12) );
  }
  sub_10025520(v11);
  return 1;
}
