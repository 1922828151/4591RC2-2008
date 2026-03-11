/*
 * func-name: sub_10101920
 * func-address: 0x10101920
 * callers: 0x10101a60
 * callees: 0x100eeb20, 0x100f5b70, 0x10101680, 0x10101f90, 0x10116f70, 0x1017a0b0
 */

int __thiscall sub_10101920(
        _DWORD *this,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        struct Camera *a13)
{
  int v14; // edi
  int v15; // edi
  _DWORD *v16; // ebx
  struct Profiler *v17; // eax

  v14 = a2;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 360) + 36))(*(_DWORD *)(a2 + 360)) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v14 + 360) + 28))(*(_DWORD *)(v14 + 360));
  a10 = a10 + 0.009999999776482582;
  a11 = a11 + 0.009999999776482582;
  a12 = a12 + 0.009999999776482582;
  a7 = a7 - 0.009999999776482582;
  a8 = a8 - 0.009999999776482582;
  a9 = a9 - 0.009999999776482582;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v14 + 360) + 20))(*(_DWORD *)(v14 + 360));
  if ( *(_BYTE *)(v14 + 420) && *(_DWORD *)(v14 + 716) )
    StaticModel::DrawSimple(*(struct ModelFrame ****)(v14 + 716), a13);
  else
    sub_10101680(&a3);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v14 + 360) + 24))(*(_DWORD *)(v14 + 360));
  *(_BYTE *)(*(_DWORD *)(v14 + 360) + 4) = 1;
  v15 = this[19];
  v16 = sub_100F5B70(v15, *(_DWORD *)(v15 + 4), &a2);
  sub_10101F90(1);
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)v16[1] = v16;
  v17 = Profiler::Get();
  ++*((_DWORD *)v17 + 11);
  return sub_1017A0B0(&a3);
}
