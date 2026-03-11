/*
 * func-name: ?AddEvent@EventAttemper@@QAEPAVEvent@@IMW4EVENT_ACTION_TYPE@@AAH@Z
 * func-address: 0x1016f450
 * callers: 0x1016f640, 0x1016f670, 0x1016f6a0
 * callees: 0x1001c7f0, 0x100f5b70, 0x1016ec20, 0x1016fd00, 0x10170860, 0x101a2534
 */

float *__thiscall EventAttemper::AddEvent(_DWORD *this, int a2, _DWORD *a3, float *a4, _DWORD *a5)
{
  float *v6; // eax
  int v7; // ebx
  _DWORD *v8; // ebp
  int v9; // edx
  float *v10; // ebx
  int v11; // edi
  int v12; // ebp
  float *v13; // ebp
  int v14; // edi
  float *v15; // ebx
  int v16; // edi
  _DWORD *v17; // edi
  int v18; // ebx
  int v19; // ebp
  float *v20; // edi
  float *v21; // edi
  float *v23; // [esp+18h] [ebp-28h] BYREF
  int v24; // [esp+1Ch] [ebp-24h]
  int v25; // [esp+20h] [ebp-20h] BYREF
  float *i; // [esp+24h] [ebp-1Ch]
  _DWORD *v27; // [esp+28h] [ebp-18h] BYREF
  int v28; // [esp+2Ch] [ebp-14h]
  int v29; // [esp+3Ch] [ebp-4h]

  v6 = (float *)operator new(0x38u);
  v23 = v6;
  v29 = 0;
  if ( v6 )
    a4 = Event::Event(v6, a2, *(float *)&a3, (int)a4);
  else
    a4 = 0;
  v25 = ++this[26];
  v29 = -1;
  a3 = this + 26;
  i = a4;
  sub_10170860(&v27, &v25);
  v7 = this[28];
  v8 = sub_100F5B70(v7, *(_DWORD *)(v7 + 4), this + 26);
  sub_1001C7F0(this + 27, 1u);
  v9 = a2;
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)v8[1] = v8;
  a2 = v9;
  sub_1016FD00(&v23, &a2);
  v10 = v23;
  v11 = this[32];
  if ( !v23 || v23 != (float *)(this + 31) )
    invalid_parameter_noinfo();
  v12 = v24;
  if ( v24 != v11 )
  {
    if ( !v10 )
      invalid_parameter_noinfo();
    if ( v12 == *((_DWORD *)v10 + 1) )
      invalid_parameter_noinfo();
    v13 = **(float ***)(v12 + 16);
    for ( i = v13; ; v13 = i )
    {
      v14 = v24;
      if ( v24 == *((_DWORD *)v10 + 1) )
        invalid_parameter_noinfo();
      v15 = *(float **)(v14 + 16);
      v16 = v14 + 12;
      if ( v13 == v15 )
        break;
      if ( v13 == *(float **)(v16 + 4) )
        invalid_parameter_noinfo();
      sub_1016FD00(&v27, v13 + 2);
      v17 = v27;
      v18 = this[4];
      if ( !v27 || v27 != this + 3 )
        invalid_parameter_noinfo();
      v19 = v28;
      if ( v28 != v18 )
      {
        if ( !v17 )
          invalid_parameter_noinfo();
        if ( v19 == v17[1] )
          invalid_parameter_noinfo();
        v20 = a4;
        (***(void (__thiscall ****)(_DWORD, float *))(v19 + 12))(*(_DWORD *)(v19 + 12), a4);
        v20[12] = 0.0;
      }
      v21 = i;
      if ( i == *(float **)(v24 + 16) )
        invalid_parameter_noinfo();
      v10 = v23;
      i = *(float **)v21;
    }
  }
  *a5 = *a3;
  return a4;
}
