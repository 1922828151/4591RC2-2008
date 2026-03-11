/*
 * func-name: sub_101017C0
 * func-address: 0x101017c0
 * callers: 0x10139890
 * callees: 0x1007e380, 0x1007e3d0, 0x1007e670, 0x10101610, 0x10116f70, 0x101a2500
 */

void __thiscall sub_101017C0(_DWORD **this, int a2, int a3)
{
  _DWORD **v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // ebx
  void (__cdecl *v6)(); // ebp
  int v7; // esi
  LARGE_INTEGER *v8; // eax
  int v9; // ebx
  struct Profiler *v10; // eax
  float *v11; // ebp
  CRETimer *v12; // eax
  double v13; // st7
  int v14; // ecx
  _DWORD *v15; // ebx
  _DWORD **v16; // [esp+10h] [ebp-14h]
  _DWORD **i; // [esp+1Ch] [ebp-8h]

  v3 = this + 18;
  v4 = (_DWORD *)*this[19];
  v16 = this;
  for ( i = this + 18; ; v3 = i )
  {
    v5 = this[19];
    if ( v3 && v3 == this + 18 )
    {
      v6 = invalid_parameter_noinfo;
    }
    else
    {
      v6 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    if ( v4 == v5 )
      break;
    if ( !v3 )
      v6();
    if ( v4 == v3[1] )
      v6();
    v7 = v4[2];
    v8 = (LARGE_INTEGER *)REGetGlobalTimer();
    CRETimer::StartMiniTimer(v8);
    v9 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v7 + 360) + 16))(*(_DWORD *)(v7 + 360), 1);
    v10 = Profiler::Get();
    ++*((_DWORD *)v10 + 12);
    v11 = (float *)((char *)Profiler::Get() + 128);
    v12 = REGetGlobalTimer();
    *v11 = CRETimer::StopMiniTimer(v12) + *v11;
    if ( v9 )
    {
      sub_10101610(v7, 0);
      v13 = (double)rand() / 32767.0 * 4.0;
    }
    else
    {
      sub_10101610(v7, 1);
      v13 = (double)rand() / 32767.0;
    }
    v14 = *(_DWORD *)(v7 + 360);
    *(float *)(v7 + 372) = v13 * *(float *)(v7 + 376);
    *(float *)(v7 + 368) = 0.0;
    *(_BYTE *)(v14 + 4) = 0;
    if ( v4 == i[1] )
      invalid_parameter_noinfo();
    v15 = (_DWORD *)*v4;
    if ( v4 != v16[19] )
    {
      *(_DWORD *)v4[1] = v15;
      *(_DWORD *)(*v4 + 4) = v4[1];
      operator delete(v4);
      v16[20] = (_DWORD *)((char *)v16[20] - 1);
    }
    this = v16;
    v4 = v15;
  }
}
